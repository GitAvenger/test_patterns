#include "stdafx.h"
#include "IDelivery.h"

IDelivery::IDelivery()
{
	id = -1;
	this->status = StatusType::ON_WAREHOUSE;
}

IDelivery::IDelivery(int id, std::string name, std::string address) : name(name) , address(address), id(id)
{
	this->status = StatusType::ON_WAREHOUSE;
}


IDelivery::~IDelivery()
{
}

const std::string IDelivery::getName() const
{
	return name;
}

const std::string IDelivery::getAddress() const
{
	return this->address;
}

int IDelivery::getId() const
{
	return id;
}

// const DeliveryType IDelivery::getDeliveryType() const
// {
//	return type;
// }

const StatusType IDelivery::getStatus() const
{
	return status;
}

// void IDelivery::setDeliveryType(DeliveryType newType)
// {
//	type = newType;
// }

void IDelivery::setStatus(StatusType newStatus)
{
	status = newStatus;
}
