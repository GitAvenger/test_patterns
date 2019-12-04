#pragma once

#include "INewManInfo.h"
#include "ManInfo.h"
#include <ctime>

class ManInfoAdapter : public INewManInfo
{
public:
	ManInfoAdapter(const ManInfo* const manInfo);
	virtual ~ManInfoAdapter();

	// Унаследовано через INewManInfo
	virtual std::string getName() const override;
	virtual int getAge() const override;
private:
	ManInfoAdapter();

	ManInfo* man_info;
};

