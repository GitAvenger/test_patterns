#pragma once

#include "IComponentFactory.h"

class WinComponentFactory : public IComponentFactory
{
public:
	WinComponentFactory();
	~WinComponentFactory();

	// Унаследовано через IComponentFactory
	virtual IButton* createButton() override;
	virtual IRadioButton* createRadioButton() override;
};

