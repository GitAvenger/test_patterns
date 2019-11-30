#include "stdafx.h"

#include "LinuxComponentFactory.h"
#include "LinuxButton.h"
#include "LinuxRadioButton.h"


LinuxComponentFactory::LinuxComponentFactory()
{
}


LinuxComponentFactory::~LinuxComponentFactory()
{
}

IButton * LinuxComponentFactory::createButton()
{
	return new LinuxButton();
}

IRadioButton * LinuxComponentFactory::createRadioButton()
{
	return new LinuxRadioButton();
}
