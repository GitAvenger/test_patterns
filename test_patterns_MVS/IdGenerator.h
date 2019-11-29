#pragma once

class IdGenerator
{
private:
	IdGenerator();

	static IdGenerator* instance;

	int currentId;

	~IdGenerator();

public:
	static IdGenerator* getInstance();

	int getNewId();
};

