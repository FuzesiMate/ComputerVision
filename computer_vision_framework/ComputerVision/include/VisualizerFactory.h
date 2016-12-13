#pragma once
#include <Visualizer.h>
#include <SimpleVisualizer.h>
#include <tbb/flow_graph.h>
#include <boost/property_tree/ptree.hpp>
#include <map>

#define TYPE		"type"
#define DELAY		"delay"
#define WINDOW_NAME	"windowname"

enum VisualizerType {
	SIMPLE
};

std::map<std::string, VisualizerType> res_VisualizerType = { {"simple",VisualizerType::SIMPLE} };

class VisualizerFactory
{
public:
	VisualizerFactory()=delete;

	static std::unique_ptr<Visualizer> createVisualizer(boost::property_tree::ptree parameters, tbb::flow::graph& g) {
		std::unique_ptr<Visualizer> visualizer;

		try {
			auto type = res_VisualizerType[parameters.get<std::string>(TYPE)];

			switch (type) {
			case VisualizerType::SIMPLE:
			{
				auto delay = parameters.get<int>(DELAY);
				auto windowName = parameters.get<std::string>(WINDOW_NAME);
				auto simple = std::make_unique<SimpleVisualizer>(windowName, delay, g);
				visualizer = std::move(simple);
				break; 
			}		
			default:
				throw std::exception("Not supported visualizer!");
				break;
			}
		}
		catch (std::exception& e) {
			throw e;
		}
		return visualizer;
	}

	~VisualizerFactory()=delete;
};

