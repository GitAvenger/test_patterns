#pragma once

#include "ICommand.h"
#include <vector>

// Менеджер команд (invoker). Содержит в себе одну текущую команду
// и историю команд. Последнюю команду можно отменять несколько раз.
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

