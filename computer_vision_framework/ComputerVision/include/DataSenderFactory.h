#ifndef DATASENDERFACTORY_H_
#define DATASENDERFACTORY_H_

#include <tbb/flow_graph.h>
#include <boost/property_tree/ptree.hpp>
#include <exception>
#include "ZeroMQDataSender.h"
#include "MQTTDataSender.h"
#include "ZeroMQDataSender.cpp"
#include "MQTTDataSender.cpp"
#include "DataTypes.h"

#define TYPE			"type"
#define TOPIC			"topic"
#define BIND_ADRESSES	"bind_addresses"

enum DataSenderType {
	ZEROMQ,
	MQTT
};

std::map<std::string, DataSenderType> res_DataSenderType = { {"zeromq",DataSenderType::ZEROMQ },{"mqtt", DataSenderType::MQTT} };

class DataSenderFactory {
public:
	DataSenderFactory() = delete;

	template<typename INPUT>
	static std::shared_ptr<DataSender<INPUT> > createDataSender(boost::property_tree::ptree parameters, tbb::flow::graph& g) {

		std::shared_ptr<DataSender<INPUT> > dataSender;

		try {
			DataSenderType senderType = res_DataSenderType[parameters.get<std::string>(TYPE)];

			switch (senderType) {
			case DataSenderType::ZEROMQ:
			{
				auto topic = parameters.get<std::string>(TOPIC);
				std::vector<std::string> addresses;
				for (auto& address : parameters.get_child(BIND_ADRESSES)) {
					addresses.push_back(address.second.get<std::string>(""));
				}
				dataSender = std::make_shared<ZeroMQDataSender<INPUT> >(topic, addresses, g);
			}
			break;
			case DataSenderType::MQTT:
				auto topic = parameters.get<std::string>(TOPIC);
				auto brokerUrl = parameters.get<std::string>(BROKER_URL);
				auto clientID = parameters.get<std::string>(CLIENTID);

				auto mqttSender = new MQTTDataSender<INPUT>(topic, brokerUrl, clientID, g);

				mqttSender->initializeNetwork();

				dataSender = std::shared_ptr<MQTTDataSender<INPUT> >(mqttSender);
				break;
			}
		}
		catch (std::exception& e) {
			throw e;
		}

		return dataSender;
	}

	virtual ~DataSenderFactory() = default;
};

#endif