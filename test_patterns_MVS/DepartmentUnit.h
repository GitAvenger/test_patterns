#pragma once

#include "IUnit.h"
#include <vector>

class DepartmentUnit : public IUnit
{
public:
	DepartmentUnit();
	// ������������ ����� IUnit
	virtual int report() override;
	void addUnit(IUnit* unit);
	virtual ~DepartmentUnit();
private:
	std::vector<IUnit*> unitVector;
};

