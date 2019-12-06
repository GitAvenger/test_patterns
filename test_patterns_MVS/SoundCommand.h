#pragma once

#include "ICommand.h"
#include "TV.h"

class SoundCommand : public ICommand
{
public:
	SoundCommand(int behavior, TV& receiver);
	~SoundCommand();

	// Унаследовано через ICommand
	virtual void execute() override;
	virtual void undo() override;
private:
	bool behavior;
	int pervoisCanal;
	TV receiver;
};

