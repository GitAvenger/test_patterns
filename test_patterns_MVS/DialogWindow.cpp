#include "stdafx.h"
#include "DialogWindow.h"


DialogWindow::DialogWindow()
{
}


DialogWindow::DialogWindow(IButton * btn, IRadioButton * radioBtn) : btn(btn), radioBtn(radioBtn)
{
}

DialogWindow::~DialogWindow()
{
	delete btn;
	delete radioBtn;
}

void DialogWindow::componentPaint()
{
	btn->paint();
	radioBtn->paint();
}
