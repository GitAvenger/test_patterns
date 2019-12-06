#pragma once

#include "ICommand.h"
#include <vector>

// �������� ������ (invoker). �������� � ���� ���� ������� �������
// � ������� ������. ��������� ������� ����� �������� ��������� ���.
class CommandManager
{
public:
	CommandManager();
	~CommandManager();

	void run();
	void undo();
	void setCommand(ICommand* cmd);
private:
	ICommand* command;
	std::vector<ICommand*> doneCommands;
};

