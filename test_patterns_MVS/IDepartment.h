#pragma once

#include "IEmployee.h"

// ������� ����� ���������� ��������� �����
// �� ���� �� ����� ��������� ���������� � �������� ��� ����������� �������,
// � ����������� �� ���� ����������� �������������
class IDepartment
{
public:
	IDepartment();

	virtual IEmployee createEmployee() = 0;

	~IDepartment();
};

