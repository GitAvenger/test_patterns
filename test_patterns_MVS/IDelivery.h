#pragma once

#include <string>

enum DeliveryType
{
	POST,
	EXPRESS,
	PICKUP
};

enum StatusType
{
	ON_WAREHOUSE,
	ON_DELIVERY,
	COMPLETED
};

// класс "ƒоставка", допустим он используетс€ дл€ отслеживани€ готовности
// доставки. также, например, он может содержать дату отправлени€
class IDelivery
{
public:
	IDelivery();
	IDelivery(int id, std::string name, std::string address);
	~IDelivery();

    const std::string getName() const;
	const std::string getAddress() const;
	int getId() const;
//	const DeliveryType getDeliveryType() const;
	const StatusType getStatus() const;
	// void setDeliveryType(DeliveryType type);
	void setStatus(StatusType newStatus);

private:
	int id;

	std::string name;
	std::string address;
//	DeliveryType type;
	StatusType status;
};

