#pragma once

#include "IEmployee.h"

// базовый класс содержащий фабричный метод
// по идее он будет создавать сотрудника и выделять ему необходимые ресурсы,
// в зависимости от типа конкретного подразделения
class IDepartment
{
public:
	IDepartment();

	virtual IEmployee createEmployee() = 0;

	~IDepartment();
};

