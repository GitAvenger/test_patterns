#include "stdafx.h"
#include "IUnitDelivery.h"


IUnitDelivery::IUnitDelivery()
{
}


IUnitDelivery::~IUnitDelivery()
{
}

IDelivery & IUnitDelivery::getDelivery(const int id)
{
	for (int i = 0; i < delivery_list.size(); i++)
	{
		if (delivery_list[i].getId() == id)
			return delivery_list[i];
	}
	throw std::exception("Ёлемент с таким id не найден");
}
