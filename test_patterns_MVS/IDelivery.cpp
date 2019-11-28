#include "stdafx.h"
#include "IDelivery.h"

IDelivery::IDelivery()
{
}

IDelivery::IDelivery(std::string name, DeliveryType type) : name(name), type(type)
{
}


IDelivery::~IDelivery()
{
}

std::string IDelivery::getName()
{
	return name;
}
