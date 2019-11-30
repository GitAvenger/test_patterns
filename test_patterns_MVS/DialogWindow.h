#pragma once

#include <iostream>
#include "IButton.h"
#include "IRadioButton.h"

class DialogWindow
{
public:
	DialogWindow();
	DialogWindow(IButton* btn, IRadioButton* radioBtn);
	~DialogWindow();

	void componentPaint();

	IButton* btn;
	IRadioButton* radioBtn;
};

