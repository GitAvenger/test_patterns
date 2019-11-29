#pragma once

#include <string>

enum StatusType
{
	ON_WAREHOUSE,
	ON_DELIVERY,
	COMPLETED
};

// ����� "��������", �������� �� ������������ ��� ������������ ����������
// ��������. �����, ��������, �� ����� ��������� ���� �����������
class IDelivery
{
public:
	IDelivery();
	IDelivery(int id, std::string name);
	~IDelivery();

    const std::string getName() const;
	int getId() const;
	const StatusType getStatus() const;
	void setStatus(StatusType newStatus);

private:
	int id;
	std::string name;
	StatusType status;
};

