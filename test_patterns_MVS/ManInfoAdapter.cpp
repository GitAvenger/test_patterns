#include "stdafx.h"
#include "ManInfoAdapter.h"

ManInfoAdapter::ManInfoAdapter()
{
}

std::string ManInfoAdapter::getName() const
{
	return std::string(man_info->getName());
}

int ManInfoAdapter::getAge() const
{
	time_t t;
	time(&t);
	int month = localtime(&t)->tm_year;
	return localtime(&t)->tm_year + 1900 - man_info->getYear();
}

ManInfoAdapter::ManInfoAdapter(const ManInfo* const manInfo)
{
	man_info = new ManInfo(manInfo->getName(), manInfo->getYear());
}

ManInfoAdapter::~ManInfoAdapter()
{
}
