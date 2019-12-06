#include "stdafx.h"
#include "OnCommand.h"

OnCommand::OnCommand(bool param, TV& receiver) : param(param), receiver(receiver)
{

}

OnCommand::~OnCommand()
{
}

void OnCommand::execute()
{
	param ? receiver.onEnable() : receiver.onDisable();
}

void OnCommand::undo()
{
	param ? receiver.onDisable() : receiver.onEnable();
}
