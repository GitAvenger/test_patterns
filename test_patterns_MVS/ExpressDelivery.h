#pragma once
#include "IDelivery.h"
class ExpressDelivery : public IDelivery
{
public:
	ExpressDelivery();
	ExpressDelivery(int id, std::string name, std::string address);
	~ExpressDelivery();

	const std::string getAddress() const;
private:
	std::string address;
};

