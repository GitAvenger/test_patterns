#pragma once

#include <iostream>
#include "IRadioButton.h"

class LinuxRadioButton : public IRadioButton
{
public:
	LinuxRadioButton();

	virtual void paint() override;

	~LinuxRadioButton();
};

