#pragma once

#include <iostream>

class ManInfo
{
public:
	ManInfo();
	ManInfo(const char* const name, int year);
	~ManInfo();

	const char* const getName() const;
	int getYear() const;
	void print();

private:
	char* name;
	int brth_year;
};

