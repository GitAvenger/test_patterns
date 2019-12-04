#pragma once

#include "IUnitDelivery.h"
#include "PickupDelivery.h"

class PickupDeliveryUnit : public IUnitDelivery
{
public:
	PickupDeliveryUnit();
	virtual ~PickupDeliveryUnit() override;
	// ������������ ����� IUnitDelivery
	virtual IDelivery* createDelivery(std::string name, std::string address) override;
};

