#pragma once

#include "ICommand.h"
#include "TV.h"

class CanalCommand : public ICommand
{
public:
	CanalCommand(int param, TV& receiver);
	~CanalCommand();

	// Унаследовано через ICommand
	virtual void execute() override;
	virtual void undo() override;
private:
	int param;
	int pervoisCanal;
	TV receiver;
};

