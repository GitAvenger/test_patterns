#pragma once

#include<iostream>

// базовый класс для генератора некоего текста
class ITextGenerator
{
public:
	virtual std::string getText() = 0;

	std::string text;

	virtual ~ITextGenerator();
};

