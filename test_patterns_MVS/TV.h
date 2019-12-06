#pragma once

#include <iostream>

//  ласс, представл€ющий приЄмник команд. Ёто телевизор, который
// 
class TV
{
public:
	TV();
	~TV();

	void soundAdd();
	void soundMinus();
	void setCanal(int number);
	void onEnable();
	void onDisable();

	int getCanalNumber();
private:
	int currentCanal;
	int currentVolume;
	bool isOn;
};
