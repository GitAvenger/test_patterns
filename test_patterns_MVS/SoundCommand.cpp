#include "stdafx.h"
#include "SoundCommand.h"

SoundCommand::SoundCommand(int behavior, TV& receiver) : behavior(behavior), receiver(receiver)
{
}

SoundCommand::~SoundCommand()
{
}

void SoundCommand::execute()
{
	behavior ? receiver.soundAdd() : receiver.soundMinus();
}

void SoundCommand::undo()
{
	behavior ? receiver.soundMinus() : receiver.soundAdd();
}
