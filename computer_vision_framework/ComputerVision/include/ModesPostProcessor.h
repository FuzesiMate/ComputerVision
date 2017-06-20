#pragma once
#include "PostProcessor.h"
#include <tbb\flow_graph.h>
class ModesPostProcessor :
	public PostProcessor
{
public:
	ModesPostProcessor(tbb::flow::graph& g) :PostProcessor(g) {};

	void loadMatrices(std::string path);

	ModelData process(ModelData inData);

	~ModesPostProcessor()=default;
};

