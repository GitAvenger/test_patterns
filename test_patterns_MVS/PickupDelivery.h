#pragma once

#include "IDelivery.h"

class PickupDelivery : public IDelivery
{
public:
	PickupDelivery();
	PickupDelivery(int id, std::string name);
	~PickupDelivery();
};

