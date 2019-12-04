#pragma once

#include <string>

class INewManInfo
{
public:
	virtual std::string getName() const = 0;
	virtual int getAge() const = 0;

	virtual ~INewManInfo();
};

