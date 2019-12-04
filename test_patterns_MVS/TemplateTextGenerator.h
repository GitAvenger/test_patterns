#pragma once

#include "ITextGenerator.h"

class TemplateTextGenerator : public ITextGenerator
{
public:
	TemplateTextGenerator();
	TemplateTextGenerator(std::string text);
	// ������������ ����� ITextGenerator
	virtual std::string getText() override;
	virtual ~TemplateTextGenerator();
};

