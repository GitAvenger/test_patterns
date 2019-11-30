#pragma once

#include <iostream>
#include "IRadioButton.h"

class WinRadioButton : public IRadioButton
{
public:
	WinRadioButton();

	virtual void paint() override;

	~WinRadioButton();
};

