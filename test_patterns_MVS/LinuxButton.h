#pragma once

#include <iostream>
#include "IButton.h"

class LinuxButton : public IButton
{
public:
	LinuxButton();

	virtual void paint() override;

	~LinuxButton();
};

