#pragma once

#include <string>
#include "IEmployee.h"

// конкретный класс, реализующий инженера
class EngineerEmployee : public IEmployee
{
	EngineerEmployee();
	EngineerEmployee(std::string name);
	~EngineerEmployee();
};

