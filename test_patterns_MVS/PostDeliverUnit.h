#pragma once

#include "IUnitDelivery.h"
#include "PostDelivery.h"

// ���������� �����, ����������� �����, ��������� ������� �������� �� �����
class PostDeliverUnit : public IUnitDelivery
{
public:
	PostDeliverUnit();
	~PostDeliverUnit();

	// ������������ ����� IUnitDelivery
	virtual IDelivery* createDelivery(std::string name, std::string address) override;
};

