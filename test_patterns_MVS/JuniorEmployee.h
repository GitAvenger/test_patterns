#pragma once

#include <string>
#include "IEmployee.h"

// конкретный класс, реализующий разработчика младшего уровня
class JuniorEmployee : IEmployee
{
	JuniorEmployee();
	JuniorEmployee(std::string name);
	~JuniorEmployee();
};

