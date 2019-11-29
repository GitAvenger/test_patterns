#include "stdafx.h"
#include "ExpressDelivery.h"

ExpressDelivery::ExpressDelivery()
{
}

ExpressDelivery::ExpressDelivery(int id, std::string name, std::string address) : IDelivery(id, name), address(address)
{
}

ExpressDelivery::~ExpressDelivery()
{
}

const std::string ExpressDelivery::getAddress() const
{
	return this->address;
}
