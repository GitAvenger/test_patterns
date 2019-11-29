#include "stdafx.h"
#include "PickupDeliveryUnit.h"
#include "IdGenerator.h"

IDelivery* PickupDeliveryUnit::createDelivery(std::string name, std::string address)
{
	return new PickupDelivery(IdGenerator::getInstance()->getNewId(), name);
}

PickupDeliveryUnit::PickupDeliveryUnit()
{
}

PickupDeliveryUnit::~PickupDeliveryUnit()
{
}
