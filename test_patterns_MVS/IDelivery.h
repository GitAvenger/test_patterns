#pragma once

#include <string>

enum DeliveryType {
	POST,
	EXPRESS,
	PICKUP
};

class IDelivery
{
public:
	IDelivery();
	IDelivery(std::string name, DeliveryType type);
	~IDelivery();

    std::string getName();

private:
	std::string name;
	DeliveryType type;
};

