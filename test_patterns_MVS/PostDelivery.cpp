#include "stdafx.h"
#include "PostDelivery.h"

PostDelivery::PostDelivery()
{
}

PostDelivery::PostDelivery(int id, std::string name, std::string address) : IDelivery(id, name), address(address)
{
}

PostDelivery::~PostDelivery()
{
}

const std::string PostDelivery::getAddress() const
{
	return this->address;
}
