#include "stdafx.h"
#include "ManInfo.h"

ManInfo::ManInfo()
{
}

ManInfo::ManInfo(const char* const name, int year) : brth_year(year)
{
	int size = strlen(name);
	this->name = new char[size + 1];
	strcpy(this->name, name);
	this->name[size] = '\0';
}

ManInfo::~ManInfo()
{
	delete[] name;
}

const char* const ManInfo::getName() const
{
	return name;
}

int ManInfo::getYear() const
{
	return brth_year;
}

void ManInfo::print()
{
	std::cout << "ManInfo name is " << name << std::endl;
}
