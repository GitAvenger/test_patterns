#pragma once

#include "ITextGeneratorDecorator.h"
#include <iostream>
#include <string>

class TemplateInfoCountSymbolTextGenerator : public ITextGeneratorDecorator
{
public:
	TemplateInfoCountSymbolTextGenerator();
	TemplateInfoCountSymbolTextGenerator(ITextGenerator* textGen);
	// ������������ ����� ITextGeneratorDecorator
	virtual std::string getText() override;
	virtual void printInfo() override;
	~TemplateInfoCountSymbolTextGenerator();
private:
	ITextGenerator* textGen;
};

