#pragma once

#include "ICommand.h"
#include "TV.h"

// ������� ��������� ����������
class OnCommand : public ICommand
{
public:
	OnCommand(bool param, TV& receiver);
	~OnCommand();

	// ������������ ����� ICommand
	virtual void execute() override;
	virtual void undo() override;
private:
	bool param;
	TV receiver;
};

