#pragma once

#include "ITextGenerator.h"

// базовый класс для декоратора генератора текста с выводом в консоль какой-то дополнительной информации
class ITextGeneratorDecorator : public ITextGenerator
{
public:
	virtual void printInfo() = 0;
};

