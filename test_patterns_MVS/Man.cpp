#include "stdafx.h"
#include "Man.h"

Man::Man()
{
}

Man::Man(std::string name, int age) : name(name), age(age)
{
}

Man::~Man()
{
}

std::string Man::getName() const
{
	return name;
}

int Man::getAge() const
{
	return age;
}
