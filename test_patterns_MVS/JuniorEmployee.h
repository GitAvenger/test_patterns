#pragma once

#include <string>
#include "IEmployee.h"

// ���������� �����, ����������� ������������ �������� ������
class JuniorEmployee : IEmployee
{
	JuniorEmployee();
	JuniorEmployee(std::string name);
	~JuniorEmployee();
};

