#pragma once
#include "Processor.h"
#include "TemplateConfiguration.h"
#include <datatypes.h>
#include <tbb/concurrent_unordered_map.h>
#include <tbb/flow_graph.h>


class PostProcessor :
	public Processor<ModelData , ModelData ,tbb::flow::queueing>
{
public:
	PostProcessor(tbb::flow::graph& g):Processor<ModelData, ModelData, tbb::flow::queueing>(g, tbb::flow::serial){};

	virtual ModelData process(ModelData inData) = 0;

	virtual ~PostProcessor()=default;
};

