#pragma once

#include <iostream>

// базовый класс для кнопок интерфейса
class IButton
{
public:
	IButton();

	virtual void paint();

	~IButton();
};

