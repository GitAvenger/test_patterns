#include "stdafx.h"
#include "PostDeliverUnit.h"
#include "IdGenerator.h"

PostDeliverUnit::PostDeliverUnit()
{
}

PostDeliverUnit::~PostDeliverUnit()
{
}

IDelivery* PostDeliverUnit::createDelivery(std::string name, std::string address)
{
	return new PostDelivery(IdGenerator::getInstance()->getNewId(), name, address);
}
