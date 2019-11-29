#pragma once

#include "IUnitDelivery.h"
#include "PickupDelivery.h"

class PickupDeliveryUnit : public IUnitDelivery
{
public:
	PickupDeliveryUnit();
	~PickupDeliveryUnit();
	// Унаследовано через IUnitDelivery
	virtual IDelivery* createDelivery(std::string name, std::string address) override;
};

