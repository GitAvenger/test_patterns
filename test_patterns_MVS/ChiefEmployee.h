#pragma once

#include "IEmployee.h"
#include <string>

// ���������� �����, ����������� ������������
class ChiefEmployee : public IEmployee
{
public:
	ChiefEmployee();
	ChiefEmployee(std::string name);
	~ChiefEmployee();
};

