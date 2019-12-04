#pragma once

#include "IUnitDelivery.h"
#include "PostDelivery.h"

// конкретный класс, реализующий отдел, создающий объекты доставки по почте
class PostDeliverUnit : public IUnitDelivery
{
public:
	PostDeliverUnit();
	virtual ~PostDeliverUnit() override;

	// ”наследовано через IUnitDelivery
	virtual IDelivery* createDelivery(std::string name, std::string address) override;
};

