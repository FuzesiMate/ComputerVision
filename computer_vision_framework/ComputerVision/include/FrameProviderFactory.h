#ifndef FRAMEPROVIDERFACTORY_H_
#define FRAMEPROVIDERFACTORY_H_

#include "Camera.h"
#include "VideoSource.h"
#include "FrameProvider.h"
#include "InitFailedException.h"
#include "NetworkCamera.h"
#include <boost/property_tree/ptree.hpp>

#define TYPE 					"type"
#define ADDRESS					"address"
#define TOPIC					"topic"

enum FrameProviderType {
	XIMEA = CV_CAP_XIAPI,
	DEFAULT = 0,
	VIDEO_SOURCE = 1,
	NETWORK_CAMERA = 2
};

std::map<std::string, FrameProviderType> res_FrameProviderType = 
		{ {"ximea",FrameProviderType::XIMEA} ,
		{"default" , FrameProviderType::DEFAULT} ,
		{"video",FrameProviderType::VIDEO_SOURCE},
		{"network_camera" , FrameProviderType::NETWORK_CAMERA} };

class FrameProviderFactory {
public:
	FrameProviderFactory()=delete;

	static std::unique_ptr<FrameProvider> createFrameProvider(boost::property_tree::ptree parameters, tbb::flow::graph& g) {
		
		std::unique_ptr<FrameProvider> frameProvider;
		try {
			auto providerType = res_FrameProviderType[parameters.get<std::string>(TYPE)];

			//Same constructor and init method for ximea camera and default camera (webcam)
			if (providerType == FrameProviderType::XIMEA || providerType == FrameProviderType::DEFAULT) {

				int numberOfCameras = parameters.get<int>(NUMBEROFCAMERAS);
				int fps = parameters.get<int>(FPS);
				int expo = parameters.get<int>(EXPOSURE);
				float gain = parameters.get<float>(GAIN);

				auto camera = std::make_unique<Camera>(fps, expo, gain, numberOfCameras, g);
				if (!camera->initialize(providerType)) {
					throw std::exception("Camera initialization failed");
				}
				//Move the pointer into the container
				frameProvider = std::move(camera);
			}
			else if (providerType == FrameProviderType::VIDEO_SOURCE) {
				
				auto source_config = parameters.get_child(SOURCES);
				auto fps = parameters.get<int>(FPS);
				std::vector<std::string> sources;
				for (auto& source_item : source_config) {
					sources.push_back(source_item.second.get<std::string>(""));
				}

				auto videoSource = std::make_unique<VideoSource>(fps, g);
				if (!videoSource->initialize(sources)) {
					throw std::exception("Video player initialization failed");
				}
				//Move the pointer into the container
				frameProvider = std::move(videoSource);
			}else if(providerType == FrameProviderType::NETWORK_CAMERA){
				auto topic = parameters.get<std::string>(TOPIC);
				auto address = parameters.get<std::string>(ADDRESS);

				auto networkCamera = std::make_unique<NetworkCamera>(g);
				if (!networkCamera->initializeNetwork(address, topic)) {
					throw new std::exception("Network camera initialization failed!");
				}

				frameProvider = std::move(networkCamera);

			}else {
				throw std::exception("Not supported frame provider!");
			}
		}
		catch (std::exception& e) {
			throw e;
		}

		return frameProvider;
	}

	virtual ~FrameProviderFactory()=default;
};

#endif /* FRAMEPROVIDERFACTORY_H_ */

