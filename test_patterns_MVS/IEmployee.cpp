#include "stdafx.h"
#include "IEmployee.h"


IEmployee::IEmployee() : name("default_name")
{
}

IEmployee::IEmployee(std::string name) : name(name)
{
}

IEmployee::~IEmployee()
{
}
