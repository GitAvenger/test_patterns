#pragma once

#include <string>

// базовый класс сотрудника
class IEmployee
{
public:
	IEmployee();
	IEmployee(std::string name);
	~IEmployee();

private:
	std::string name;
};

