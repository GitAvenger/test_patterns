#pragma once

#include "IDelivery.h"

class PostDelivery : public IDelivery
{
public:
	PostDelivery();
	PostDelivery(int id, std::string name, std::string address);
	~PostDelivery();

	const std::string getAddress() const;
private:
	std::string address;
};

