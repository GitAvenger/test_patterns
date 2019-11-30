#include "stdafx.h"

#include "WinComponentFactory.h"
#include "WinButton.h"
#include "WinRadioButton.h"


WinComponentFactory::WinComponentFactory()
{
}


WinComponentFactory::~WinComponentFactory()
{
}

IButton* WinComponentFactory::createButton()
{
	return new WinButton();
}

IRadioButton* WinComponentFactory::createRadioButton()
{
	return new WinRadioButton();
}
