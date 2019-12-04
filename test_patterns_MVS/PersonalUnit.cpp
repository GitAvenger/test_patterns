#include "stdafx.h"
#include "PersonalUnit.h"

PersonalUnit::PersonalUnit() : name("default_name"), state(false)
{
}

PersonalUnit::PersonalUnit(bool state, std::string name) : name(name), state(state)
{
}

PersonalUnit::~PersonalUnit()
{
}

int PersonalUnit::report()
{
	// отчёт возвращается в виде процентов готовности
	return state ? 100 : 0;
}
