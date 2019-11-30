#pragma once

#include "IButton.h"
#include "IRadioButton.h"

// ������� ����� ��� �������, ��������� �������� ����������
class IComponentFactory
{
public:
	IComponentFactory();

	virtual IButton* createButton() = 0;

	virtual IRadioButton* createRadioButton() = 0;

	~IComponentFactory();
};