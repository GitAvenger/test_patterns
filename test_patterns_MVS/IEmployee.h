#pragma once

#include <string>

// ������� ����� ����������
class IEmployee
{
public:
	IEmployee();
	IEmployee(std::string name);
	~IEmployee();

private:
	std::string name;
};

