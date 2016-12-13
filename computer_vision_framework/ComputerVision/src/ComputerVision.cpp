/*
 * ComputerVision.cpp
 *
 *  Created on: 2016. aug. 9.
 *      Author: M�t�
 */
#include <winsock2.h>
#include "ComputerVision.h"
#include <boost/property_tree/json_parser.hpp>
#include <tbb/tbb.h>
#include <thread>
#include <exception>
#include "DataTypes.h"
#include "ImageProcessorFactory.h"
#include "DataSenderFactory.h"
#include "ObjectDataCollector.h"
#include "FrameProvider.h"
#include "FrameProviderFactory.h"
#include "CoordinateTransformer.h"
#include "VisualizerFactory.h"
#include "Object.cpp"

bool ComputerVision::initialize(const std::string configFilePath) {

	/*
	 * initialize method needs to be called before the start of the processing workflow
	 * the initialization of some cameras can take more time, so it is recommended
	 * to so this step before we start the processing thread in order to faster startup
	 *
	 * datasenders are also initialized in this step for the same reasons
	 */

	if (!processing) {
		//parse the config file into a boost property tree object
		try {
			boost::property_tree::read_json(configFilePath, config);
		}
		catch (std::exception& e) {
			std::cout << "JSON file is missing or invalid! Error message: " << e.what() << std::endl;
			initialized = false;
			return initialized;
		}

		if (!validateConfig()) {
			initialized = false;
			return initialized;
		}
		/*
		CREATE FRAME PROVIDER
		*/
		frameProvider.reset();
		try {
			auto cameraConfig = config.get_child(FRAME_PROVIDER);
			auto type = cameraConfig.get<std::string>(TYPE);

			try {
				frameProvider = FrameProviderFactory::createFrameProvider(cameraConfig, *this);
			}
			catch (std::exception& e) {
				std::cout << "Error occured while creating frame provider! Error message: " << e.what() << std::endl;
				initialized = false;
				return initialized;
			}
		}
		catch (std::exception& e) {
			std::cout << "Error occured while parsing camera configuration! Error message: " << e.what() << std::endl;
			initialized = false;
			return initialized;
		}
	   /*
		*CREATE DATA SENDERS
		*/
		objectDataSenders.clear();
		ipDataSenders.clear();
		if (config.find(DATA_SENDERS) != config.not_found()) {
			try {
				auto senderConfig = config.get_child(DATA_SENDERS);
				for (auto& sender : senderConfig) {

					if (sender.second.find(IMAGEPROCESSOR) != sender.second.not_found()) {
						auto dataSender = DataSenderFactory::createDataSender<ImageProcessingData<t_cfg> >(sender.second, *this);
						auto ipType = sender.second.get<std::string>(IMAGEPROCESSOR);
						ipDataSenders[ipType] = dataSender;
					}
					else {
						auto dataSender = DataSenderFactory::createDataSender<ModelData>(sender.second, *this);
						objectDataSenders.push_back(dataSender);
					}
				}
			}
			catch (std::exception& e) {
				std::cout << "Error occured while creating data sender! Error message: " << e.what() << std::endl;
				initialized = false;
				return initialized;
			}
		}
	}
	initialized = true;
	return initialized;
}

bool ComputerVision::validateConfig() {
	auto objects = config.get_child(OBJECTS);
	auto imageProcessors = config.get_child(IMAGEPROCESSORS);
	
	std::vector<std::string> objectNames;
	std::vector<std::string> markerNames;
	std::vector<std::string> markerIdentifiers;
	
	bool validConfig = true;

	if (objects.empty()) {
		std::cout << "OBJECT CONFIGURATION ERROR: The list of Objects is empty!" << std::endl;
		validConfig = false;
	}
	/*
	Validate object configuration
	*/
	for (auto& object : objects) {

		auto name = object.second.get<std::string>(NAME);
		if (std::find(objectNames.begin() , objectNames.end() , name) != objectNames.end()) {
			std::cout << "OBJECT CONFIGURATION ERROR: The name " << name << " is not unique!" << std::endl;
			validConfig = false;
		}
		objectNames.push_back(name);
		
		auto markers = object.second.get_child(MARKERS);
		if (markers.empty()) {
			std::cout << "OBJECT CONFIGURATION ERROR: The list of markers is empty! (Object: " << name<<")"<<std::endl;
			validConfig = false;
		}
		for (auto& marker : markers) {
			auto markerName = marker.second.get<std::string>(NAME);
			auto markerID = marker.second.get<std::string>(ID);
			if (std::find(markerNames.begin(), markerNames.end(), markerName)!=markerNames.end()) {
				std::cout << "OBJECT CONFIGURATION WARNING: The marker name " << markerName << " is not unique! (Object: " <<name<<")"<< std::endl;
				validConfig = false;
			}
			markerNames.push_back(markerName);
			if (std::find(markerIdentifiers.begin(), markerIdentifiers.end(), markerID) != markerIdentifiers.end()) {
				std::cout << "OBJECT CONFIGURATION WARNING: The marker identifier " << markerID << " is not unique! (Object: " << name << ")" << std::endl;
				validConfig = false;
			}
			markerIdentifiers.push_back(markerID);
		}

		auto markerType = object.second.get<std::string>(MARKER_TYPE);
		bool imageProcessorExists = false;
		for (auto& imageProcessor : imageProcessors) {
			auto ipType = imageProcessor.second.get<std::string>(TYPE);
			if (ipType == markerType) {
				imageProcessorExists = true;
			}
		}
		if (!imageProcessorExists) {
			std::cout << "OBJECT CONFIGURATION ERROR: The assigned ImageProcessor does not exist! (Object: " << name <<")"<<std::endl;
			validConfig = false;
		}
	}
	/*
	Validate image processor configuration
	*/
	for (auto& imageProcessor : imageProcessors) {
		auto ipType = imageProcessor.second.get<std::string>(TYPE);
		bool hasAssignedObject = false;
		for (auto& object : objects) {
			auto markerType = object.second.get<std::string>(MARKER_TYPE);
			if (ipType == markerType) {
				hasAssignedObject = true;
			}
		}
		if (!hasAssignedObject) {
			std::cout << "IMAGE PROCESSOR CONFIGURATION ERROR: No object is assigned! (ImageProcessor: " << ipType <<")"<< std::endl;
			validConfig = false;
		}
	}
	/*
	Validate data sender configuration
	*/
	if (config.find(DATA_SENDERS) != config.not_found()) {
		auto dataSenders = config.get_child(DATA_SENDERS);
		for (auto& dataSender : dataSenders) {
			if (dataSender.second.find(IMAGEPROCESSOR) != dataSender.second.not_found()) {
				bool imageProcessorExists = false;
				auto assignedIpType = dataSender.second.get<std::string>(IMAGEPROCESSOR);
				for (auto& imageProcessor : imageProcessors) {
					auto ipType = imageProcessor.second.get<std::string>(TYPE);
					if (ipType == assignedIpType) {
						imageProcessorExists = true;
					}
				}
				if (!imageProcessorExists) {
					std::cout << "DATA SENDER CONFIGURATION ERROR: The assigned ImageProcessor does not exist!" << std::endl;
					validConfig = false;
				}
			}
		}
	}

	return validConfig;
}

void ComputerVision::startProcessing() {

	std::cout << "Building data flow graph..." << std::endl;

	if (initialized && !processing) {
		/*
		 * this function blocks it's caller until the processing workflow ends
		 * we do not need these nodes outside this function, so they are instantiated locally
		 * if the processing ends, they will be destroyed
		 */
		 //objects mapped by their name
		std::map<std::string, std::unique_ptr<Object<t_cfg> > > objects;

		//limiter node controls the number of existing frames in the graph in order to reduce memory consumption
		frame_limiter frameLimiter(*this, 10);

		//after each imageprocessor there is a sequencer node, which restores the original order of the data
		std::vector<std::unique_ptr<ip_data_sequencer> > IpDataSequencers;

		//after each sequencer node there is a broadcaster node that broadcasts the output of the sequencer node
		std::map<std::string, std::unique_ptr<ip_data_broadcaster> > IpDataBroadcasters;

		//if all corresponding objects are limited the image processor will be also limited
		std::map<std::string, std::unique_ptr<frame_limiter> > ipLimiters;

		//if an object has a detection limit a limiter node will be applied before
		std::map<std::string, std::unique_ptr<object_limiter> > objectLimiters;

		//visualizer to show the result of object tracking
		std::unique_ptr<Visualizer> visualizer;

		//transformer performs 2D-3D transformation from a stereo point
		std::unique_ptr<CoordinateTransformer> transformer;

		//data collector collects object data that corresponds to the same frame
		std::unique_ptr<ObjectDataCollector> dataCollector;

		/*
		 * CREATE IMAGE PROCESSORS
		 * read image processor configuration, instantiate image processors
		 */
		try {
			for (auto& imageProcessor : config.get_child(IMAGEPROCESSORS)) {
				auto type = imageProcessor.second.get<std::string>(TYPE);
				try {
					imageProcessors[type] = ImageProcessorFactory::createImageProcessor<t_cfg>(imageProcessor.second, *this);
					IpDataSequencers.emplace_back(std::make_unique<ip_data_sequencer>(*this, 
						[](ImageProcessingData<t_cfg> data)->uint64_t {
							return data.frameIndex;
						}));
					IpDataBroadcasters.emplace(type , std::make_unique<ip_data_broadcaster>(*this));
				}
				catch (std::exception& e) {
					std::cout << "Error occured while creating image processor! Error message: " << e.what() << std::endl;
					return;
				}
			}
		}
		catch (std::exception& e) {
			std::cout << "Error occured while parsing image processor configuration! Error message: " << e.what() << std::endl;
			return;
		}
		/*
		 * CREATE OBJECTS
		 * Parse object configuration and instantiate objects
		 */
		std::map<std::string, int> imageProcessorLimits;

		try {
			dataCollector = std::unique_ptr<ObjectDataCollector>(new ObjectDataCollector(config.get_child(OBJECTS).size(), *this));

			for (auto& object : config.get_child(OBJECTS)) {
				auto name = object.second.get<std::string>(NAME);
				auto type = object.second.get<std::string>(MARKER_TYPE);
			   /*
				* Find the limitation value to imageprocessors
				* They will be stopped if there is no more object
				* that needs their output
				*/
				int limit;
				object.second.find(LIMIT) != object.second.not_found() ? limit = object.second.get<int>(LIMIT) : limit = -1;
				objects.emplace(std::make_pair(name, std::make_unique<Object<t_cfg> >(name, type, limit, *this)));
				
				for (auto& marker : object.second.get_child(MARKERS)) {
					objects[name]->addMarker(marker.second.get<std::string>(NAME), marker.second.get<int>(ID));
				}
				if (limit != -1) {
					objectLimiters.emplace(name, std::make_unique<object_limiter>(*this, limit));
				}
				if (imageProcessorLimits.find(type) == imageProcessorLimits.end() || (imageProcessorLimits[type] < limit && imageProcessorLimits[type] != -1) || limit == -1) {
					imageProcessorLimits[type] = limit;
				}
			}
		}
		catch (std::exception& e) {
			std::cout << "Error occured while creating objects! Error message: " << e.what() << std::endl;
			return;
		}

		//build the data flow graph
		
	   /*
		* FrameProvider--->FrameLimiter		
		*/
		make_edge(frameProvider->getProviderNode(), frameLimiter);
		/*
		* Parse the configuration and instantiate visualizer module if required
		* merge output data with the corresponding frame
		*/
		tbb::flow::join_node<tbb::flow::tuple<Frame, ModelData>, tbb::flow::queueing > FrameModelDataJoiner(*this);

		if (config.find(VISUALIZER) != config.not_found()) {
			try {
				auto visConfig = config.get_child(VISUALIZER);
				
				try {
					visualizer = VisualizerFactory::createVisualizer(visConfig, *this);
				}
				catch (std::exception& e) {
					std::cout << "Error occured while creating visualizer! Error message: " << e.what() << std::endl;
					return;
				}
			   /*
				* FrameLimiter---|
				*			     |--->FrameModelDataJoiner--->Visualizer
				*	      Model---|
				*/
				make_edge(frameLimiter, tbb::flow::input_port<0>(FrameModelDataJoiner));
				make_edge(model->getProcessorNode(), tbb::flow::input_port<1>(FrameModelDataJoiner));
				make_edge(FrameModelDataJoiner, visualizer->getProcessorNode());
			}
			catch (std::exception& e) {
				std::cout << "Error occured while reading visualizer configuration! Error message: " << e.what() << std::endl;
				return;
			}
		}
	   /*
		* connect image processors to camera and corresponding objects
		* if all objects assigned to an image processor is limited
		* then the image processor will be also limited
		*/
		int i = 0;
		for (auto& imageProcessor : imageProcessors) {
			if (imageProcessorLimits[imageProcessor.first] != -1) {
				ipLimiters.emplace(imageProcessor.first, std::make_unique<frame_limiter>(*this, imageProcessorLimits[imageProcessor.first]));
			   /*
				* FrameLimiter--->ImageProcessorLimiter--->ImageProcessor
				*/
				make_edge(frameLimiter, *ipLimiters[imageProcessor.first]);
				make_edge(*ipLimiters[imageProcessor.first], imageProcessor.second->getProcessorNode());
			}
			else {
			   /*
				* FrameLimiter--->ImageProcessor
				*/
				make_edge(frameLimiter, imageProcessor.second->getProcessorNode());
			}
		   /*
			* ImageProcessor--->ImageProcessingDataSequencer--->ImageProcessingDataBroadcaster
			*/
			make_edge(imageProcessor.second->getProcessorNode(), *IpDataSequencers[i]);
			make_edge(*IpDataSequencers[i], *IpDataBroadcasters[imageProcessor.first]);

			if (ipDataSenders.find(imageProcessor.first) != ipDataSenders.end()) {
			   /*
				* ImageProcessingDataBroadcaster--->ImageProcessingDataSender
				*/
				make_edge(*IpDataBroadcasters[imageProcessor.first], ipDataSenders[imageProcessor.first]->getProcessorNode());
			}
			i++;
		}
	   /*
		* connect the object to the object data collector module
		* if the object is limited a limiter node is applied before
		*/
		int j = 0;
		for (auto& object : objects) {
			if (objectLimiters.find(object.first) != objectLimiters.end()) {
			   /*
				* ImageProcessingDataBroadcaster--->ObjectLimiter--->Object
				*/
				make_edge(*IpDataBroadcasters[object.second->getMarkerType()], *objectLimiters[object.first]);
				make_edge(*objectLimiters[object.first], object.second->getProcessorNode());
			}
			else {
			   /*
				* ImageProcessingDataBroadcaster--->Object
				*/
				make_edge(*IpDataBroadcasters[object.second->getMarkerType()], object.second->getProcessorNode());
			}
		   /*
			* Object--->ObjectDataCollector
			*/
			make_edge(object.second->getProcessorNode(), dataCollector->getCollectorNode());
			j++;
		}
	   /*
		* ObjectDataCollector(1)--->FrameLimiter(decrement)
		*/
		make_edge(tbb::flow::output_port<1>(dataCollector->getCollectorNode()), frameLimiter.decrement);
	   /*
		* apply 3D reconstruction
		* insert a transformer module between object data collector and modules that receive its output
		*/
		if (config.find(TRANSFORMER) != config.not_found()) {
			try {
				auto transformerConfig = config.get_child(TRANSFORMER);
				auto pathToMatrices = transformerConfig.get<std::string>(PATH_TO_MATRICES);
				transformer = std::unique_ptr<CoordinateTransformer>(new CoordinateTransformer(*this));
				transformer->loadMatrices(pathToMatrices);
			}
			catch (std::exception& e) {
				std::cout << "Error occured while creating transformer! Error message: " << e.what() << std::endl;
				return;
			}
		   /*
			* ObjectDataCollector(0)--->Transformer--->Model
			*/
			make_edge(tbb::flow::output_port<0>(dataCollector->getCollectorNode()), transformer->getProcessorNode());
			make_edge(transformer->getProcessorNode(), model->getProcessorNode());
		}
		else {
		   /*
			* ObjectDataCollector(0)--->Model
			*/
			make_edge(tbb::flow::output_port<0>(dataCollector->getCollectorNode()), model->getProcessorNode());
		}
		for (auto& sender : objectDataSenders) {
		   /*
			* Model--->ObjectDataSender
			*/
			make_edge(model->getProcessorNode(), sender->getProcessorNode());
		}
	   /*
		* start the frame provider
		*/
		processing = true;
		frameProvider->start();

		std::cout << "Flow graph has been built successfully, start processing workflow" << std::endl;

	   /*
		* block until the processing workflow finishes
		*/
		try {
			this->wait_for_all();
		}
		catch (int& ex) {
			std::cout << "Error occured in the processing workflow! Error code: " << ex << std::endl;
			this->reset();
		}

		std::cout << "Processing thread stopped!" << std::endl;
	}
	else {
		std::cout << "CV module is not initialized! Please initialize before start the processing workflow!" << std::endl;
	}
}

void ComputerVision::stopProcessing() {
	std::cout << "stop processing..." << std::endl;
	processing = false;
	frameProvider->stop();
}

void ComputerVision::reconfigure(const std::string configFilePath) {
	if (processing) {
		try {
			boost::property_tree::read_json(configFilePath, config);
			auto cameraConfig = config.get_child(FRAME_PROVIDER);
			frameProvider->reconfigure(cameraConfig);

			for (auto& ipConfig : config.get_child(IMAGEPROCESSORS)) {
				auto type = ipConfig.second.get<std::string>(TYPE);
				imageProcessors[type]->reconfigure(ipConfig.second);
			}
		}
		catch (std::exception& e) {
			std::cout << "Error occured while reconfiguring components! Error message: " << e.what() << std::endl;
		}
	}
}

bool ComputerVision::getData(ModelData& output) {
	if (processing) {
		return model->getData(output);
	}
	else {
		return false;
	}
}

bool ComputerVision::isProcessing() {
	return processing;
}
