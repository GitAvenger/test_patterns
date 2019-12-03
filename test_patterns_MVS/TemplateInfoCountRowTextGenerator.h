#pragma once

#include "ITextGeneratorDecorator.h"
#include <iostream>
#include <string>

class TemplateInfoCountRowTextGenerator : public ITextGeneratorDecorator
{
public:
	TemplateInfoCountRowTextGenerator();
	TemplateInfoCountRowTextGenerator(ITextGenerator* textGen);
	// ������������ ����� ITextGeneratorDecorator
	virtual std::string getText() override;
	virtual void printInfo() override;
	~TemplateInfoCountRowTextGenerator();
private:
	ITextGenerator* textGen;
};

