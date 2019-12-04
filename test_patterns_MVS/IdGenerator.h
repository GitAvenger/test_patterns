#pragma once


class IdGenerator
{
private:
	IdGenerator();

	static IdGenerator* instance;

	int currentId;

public:
	static IdGenerator* getInstance();

	int getNewId();

	~IdGenerator();
};

