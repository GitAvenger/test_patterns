#include "stdafx.h"
#include "IDelivery.h"

IDelivery::IDelivery()
{
	id = -1;
	this->status = StatusType::ON_WAREHOUSE;
}

IDelivery::IDelivery(int id, std::string name) : name(name), id(id)
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

int IDelivery::getId() const
{
	return id;
}

const StatusType IDelivery::getStatus() const
{
	return status;
}

void IDelivery::setStatus(StatusType newStatus)
{
	status = newStatus;
}
