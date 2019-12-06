#include "stdafx.h"
#include "Console.h"

#include "CanalCommand.h"
#include "SoundCommand.h"
#include "OnCommand.h"

Console::Console(CommandManager& cmdManager) : cmdManager(cmdManager)
{
}

Console::~Console()
{
}

void Console::onPress()
{
	// cmdManager.setCommand(new OnCommand());
}

void Console::disablePress()
{
}

void Console::soundAddPress()
{
}

void Console::soundMinusPress()
{
}

void Console::pressButton1()
{
}

void Console::pressButton2()
{
}

void Console::pressButton3()
{
}

void Console::pressButton4()
{
}

void Console::pressButton5()
{
}
