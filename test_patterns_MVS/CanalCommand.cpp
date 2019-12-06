#include "stdafx.h"
#include "CanalCommand.h"
#include "CanalCommand.h"

CanalCommand::CanalCommand(int param, TV& receiver) : param(param), receiver(receiver)
{
}

CanalCommand::~CanalCommand()
{
}

void CanalCommand::execute()
{
	pervoisCanal = receiver.getCanalNumber();
	receiver.setCanal(param);
}

void CanalCommand::undo()
{
	receiver.setCanal(pervoisCanal);
}
