#pragma once

#include "IEmployee.h"
#include <string>

// конкретный класс, реализующий руководителя
class ChiefEmployee : public IEmployee
{
public:
	ChiefEmployee();
	ChiefEmployee(std::string name);
	~ChiefEmployee();
};

