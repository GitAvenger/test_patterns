#pragma once

#include <string>
#include "IEmployee.h"

// ���������� �����, ����������� ��������
class EngineerEmployee : public IEmployee
{
	EngineerEmployee();
	EngineerEmployee(std::string name);
	~EngineerEmployee();
};

