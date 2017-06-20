#include "ModesPostProcessor.h"

void ModesPostProcessor::loadMatrices(std::string path) {
	std::cout << "Load matrices" << std::endl;
}

ModelData ModesPostProcessor::process(ModelData inData) {
	std::cout << "dummy postprocessor called!" << std::endl;
	return inData;
}
