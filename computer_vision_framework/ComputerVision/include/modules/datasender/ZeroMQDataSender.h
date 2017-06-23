/*
 * DataSender.h
 *
 *  Created on: Oct 3, 2016
 *      Author: teqbox
 */

#ifndef ZEROMQDATASENDER_H_
#define ZEROMQDATASENDER_H_

#include "core/data/DataTypes.h"
#include "modules/datasender/DataSender.h"
#include <zmq.hpp>

constexpr auto BIND_ADRESSES = "bindaddress";

template <typename INPUT>
class ZeroMQDataSender: public DataSender<INPUT> {
private:
	zmq::context_t context;
	zmq::socket_t publisher;
	std::string topic;
public:
	ZeroMQDataSender(std::string topic ,std::vector<std::string> bindAddresses ,tbb::flow::graph& g):DataSender(g,1),context(zmq::context_t(1)),publisher(zmq::socket_t(context, ZMQ_PUB)),topic(topic){
		for (auto address : bindAddresses) {
			publisher.bind(address);
		}
	};

	tbb::flow::continue_msg process(INPUT modelData);

	virtual ~ZeroMQDataSender();
};

#endif /* ZEROMQDATASENDER_H_ */
