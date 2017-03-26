#ifndef NETWORKCAMERA_H_
#define NETWORKCAMERA_H_

#include <opencv2/opencv.hpp>
#include "FrameProvider.h"
#include "DataTypes.h"
#include <zmq.hpp>

class NetworkCamera :
	public FrameProvider
{
public:
	NetworkCamera(tbb::flow::graph& g);
	~NetworkCamera();

	bool provide(Frame& frame);
	void reconfigure(boost::property_tree::ptree config);
	bool initializeNetwork(std::string address , std::string topic);

private:
	int frameCounter;
	zmq::context_t context;
	zmq::socket_t subscriber;
};

#endif