#include "stdafx.h"
#include "DepartmentUnit.h"

DepartmentUnit::DepartmentUnit()
{
}

DepartmentUnit::~DepartmentUnit()
{
}

int DepartmentUnit::report()
{
	int percentStateSum = 0;
	int i = 0;
	for (; i < unitVector.size(); ++i)
		percentStateSum += unitVector[i]->report();
	// ������������ �������� ������� ���������
	// �� ���� ���������� ��������������
	return percentStateSum/i;
}

void DepartmentUnit::addUnit(IUnit* unit)
{
	unitVector.push_back(unit);
}
