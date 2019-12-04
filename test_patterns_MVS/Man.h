#pragma once

#include<string>
#include "INewManInfo.h"

class Man : public INewManInfo
{
public:
	Man();
	Man(std::string name, int age);
	virtual ~Man();
private:
	std::string name;
	int age;

	// Унаследовано через INewManInfo
	virtual std::string getName() const override;
	virtual int getAge() const override;
};

