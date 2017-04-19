#ifndef MQTTDATASENDER_H_
#define MQTTDATASENDER_H_

#include <MQTTClient.h>
#include "DataSender.h"
#include "DataTypes.h"

#define BROKER_URL		"brokerurl"
#define CLIENTID		"clientid"

template <typename INPUT>
class MQTTDataSender : public DataSender<INPUT> {
private:
	MQTTClient publisher;
	std::string topic;
	std::string brokerUrl;
	std::string clientID;
public:
	MQTTDataSender(std::string topic, std::string brokerUrl,std::string clientID, tbb::flow::graph& g);
	bool initializeNetwork();
	tbb::flow::continue_msg process(INPUT modelData);
	virtual ~MQTTDataSender();
};

#endif