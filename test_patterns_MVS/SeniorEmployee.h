#pragma once

#include <string>
#include "IEmployee.h"

class SeniorEmployee : IEmployee
{
public:
	SeniorEmployee();
	SeniorEmployee(std::string name);
	~SeniorEmployee();
};

