#pragma once


#include "IDelivery.h"

#include <vector>
#include <string>

// базовый класс отдела, осуществл€ющего учЄт отправлений
class IUnitDelivery
{
public:
	IUnitDelivery();
	virtual ~IUnitDelivery();

	virtual IDelivery* createDelivery(std::string name, std::string address = "") = 0;
};

