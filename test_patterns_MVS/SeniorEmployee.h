#pragma once

#include <string>
#include "IEmployee.h"

// конкретный класс, реализующий разработчика среднего уровня
class SeniorEmployee : IEmployee
{
public:
	SeniorEmployee();
	SeniorEmployee(std::string name);
	~SeniorEmployee();
};

