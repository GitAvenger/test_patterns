#pragma once

#include "ICommand.h"
#include "TV.h"

// команда включения телевизора
class OnCommand : public ICommand
{
public:
	OnCommand(bool param, TV& receiver);
	~OnCommand();

	// Унаследовано через ICommand
	virtual void execute() override;
	virtual void undo() override;
private:
	bool param;
	TV receiver;
};

