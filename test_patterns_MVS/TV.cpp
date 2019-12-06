#include "stdafx.h"
#include "TV.h"

TV::TV() : currentCanal(1), isOn(false), currentVolume(1)
{
}

TV::~TV()
{
}

void TV::soundAdd()
{
	++currentVolume;
	std::cout << "Sound added!" << std::endl;
}

void TV::soundMinus()
{
	if (currentVolume > 0)
	{
		--currentVolume;
		std::cout << "Sound minused!" << std::endl;
	}
	else
		std::cout << "Sound off!" << std::endl;
}

void TV::setCanal(int number)
{
	currentCanal = number;
	std::cout << "Set canal number " << number << std::endl;
}

void TV::onEnable()
{
	std::cout << "TV on enabled!" << std::endl;
}

void TV::onDisable()
{
	std::cout << "TV on disabled!" << std::endl;
}

int TV::getCanalNumber()
{
	return currentCanal;
}
