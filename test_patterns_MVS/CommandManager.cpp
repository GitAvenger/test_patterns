#include "stdafx.h"
#include "CommandManager.h"

CommandManager::CommandManager() : command(nullptr)
{
}

CommandManager::~CommandManager()
{
	delete command;
}

void CommandManager::run()
{
	if (command != nullptr)
	{
		command->execute();
		doneCommands.push_back(command);
	}
}

void CommandManager::undo()
{
	if (doneCommands.size() == 0)
	{
		return;
	}
	else
	{
		command = doneCommands.back();
		doneCommands.pop_back();
		command->undo();
		// очистка памяти
		delete command;
	}
}

void CommandManager::setCommand(ICommand* cmd)
{
	command = cmd;
}
