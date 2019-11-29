#include "stdafx.h"

#include "ExperessDeliveryUnit.h"
#include "IdGenerator.h"

ExperessDeliveryUnit::ExperessDeliveryUnit()
{
}

ExperessDeliveryUnit::~ExperessDeliveryUnit()
{
}

IDelivery* ExperessDeliveryUnit::createDelivery(std::string name, std::string address)
{
	return new ExpressDelivery(IdGenerator::getInstance()->getNewId(), name, address);
}
