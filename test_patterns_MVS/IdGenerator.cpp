#include "stdafx.h"
#include "IdGenerator.h"

IdGenerator* IdGenerator::instance = nullptr;

IdGenerator::IdGenerator()
{
	currentId = 0;
}


IdGenerator::~IdGenerator()
{
}

IdGenerator * IdGenerator::getInstance()
{
	if (!instance)
		instance = new IdGenerator();
	return instance;
}

int IdGenerator::getNewId()
{
	return currentId++;
}
