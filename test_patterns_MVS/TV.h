#pragma once

#include <iostream>

// �����, �������������� ������� ������. ��� ���������, �������
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
