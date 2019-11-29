#pragma once

#include "IUnitDelivery.h"
#include "ExpressDelivery.h"

class ExperessDeliveryUnit : public IUnitDelivery
{
public:
	ExperessDeliveryUnit();
	~ExperessDeliveryUnit();

	// Унаследовано через IUnitDelivery
	virtual IDelivery* createDelivery(std::string name, std::string address) override;
};

