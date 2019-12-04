#pragma once

#include "IComponentFactory.h"

class LinuxComponentFactory : public IComponentFactory
{
public:
	LinuxComponentFactory();
	virtual ~LinuxComponentFactory();

	// Унаследовано через IComponentFactory
	virtual IButton * createButton() override;
	virtual IRadioButton * createRadioButton() override;
};

