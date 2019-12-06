#pragma once

#include "CommandManager.h"

// �����-������, ������������ ����� ����� �� ����������,
// � ������� �������� ���������� �������
class Console
{
public:
	Console(CommandManager& cmdManager);
	~Console();

	void onPress();
	void disablePress();
	void soundAddPress();
	void soundMinusPress();
	void pressButton1();
	void pressButton2();
	void pressButton3();
	void pressButton4();
	void pressButton5();

private:
	Console();
	CommandManager cmdManager;
};

