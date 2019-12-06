#pragma once

#include "IUnit.h"
#include <string>

class PersonalUnit : public IUnit
{
public:
	PersonalUnit();
	PersonalUnit(bool state, std::string name = "default_name");
	// Унаследовано через IUnit
	virtual int report() override;
	virtual ~PersonalUnit();
private:
	std::string name;
	bool state;
};

