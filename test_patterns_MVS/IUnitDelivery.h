#pragma once

#include "IDelivery.h"

#include <vector>
#include <string>

// базовый класс отдела, осуществл€ющего учЄт отправлений
class IUnitDelivery
{
public:
	IUnitDelivery();
	~IUnitDelivery();

	IDelivery& getDelivery(const int id);

	virtual IDelivery createDelivery(std::string name, std::string address) = 0;
private:
	std::vector<IDelivery> delivery_list;
};

