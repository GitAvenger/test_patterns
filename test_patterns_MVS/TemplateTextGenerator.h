#pragma once

#include "ITextGenerator.h"

class TemplateTextGenerator : public ITextGenerator
{
public:
	TemplateTextGenerator();
	TemplateTextGenerator(std::string text);
	// Унаследовано через ITextGenerator
	virtual std::string getText() override;
	virtual ~TemplateTextGenerator();
};

