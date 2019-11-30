#pragma once

#include <iostream>
#include "IButton.h"

class WinButton : public IButton
{
public:
	WinButton();

	virtual void paint() override;

	~WinButton();
};

