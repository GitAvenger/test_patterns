#pragma once

#include "IButton.h"
#include "IRadioButton.h"

// базовый класс для классов, создающих элементы интерфейса
class IComponentFactory
{
public:
	IComponentFactory();

	virtual IButton* createButton() = 0;

	virtual IRadioButton* createRadioButton() = 0;

	~IComponentFactory();
};