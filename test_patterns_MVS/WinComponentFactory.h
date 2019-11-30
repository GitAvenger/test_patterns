#pragma once

#include "IComponentFactory.h"

class WinComponentFactory : public IComponentFactory
{
public:
	WinComponentFactory();
	~WinComponentFactory();

	// ������������ ����� IComponentFactory
	virtual IButton* createButton() override;
	virtual IRadioButton* createRadioButton() override;
};

