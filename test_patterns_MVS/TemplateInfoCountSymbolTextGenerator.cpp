#include "stdafx.h"
#include "TemplateInfoCountSymbolTextGenerator.h"

TemplateInfoCountSymbolTextGenerator::TemplateInfoCountSymbolTextGenerator()
{
}

TemplateInfoCountSymbolTextGenerator::TemplateInfoCountSymbolTextGenerator(ITextGenerator* textGen) : textGen(textGen)
{
	this->text = textGen->text;
}

std::string TemplateInfoCountSymbolTextGenerator::getText()
{
	printInfo();
	return textGen->getText();
}

void TemplateInfoCountSymbolTextGenerator::printInfo()
{
	std::cout << "Getting text with symbols count: " << textGen->text.length() << std::endl;
}

TemplateInfoCountSymbolTextGenerator::~TemplateInfoCountSymbolTextGenerator()
{
	// delete в данном случае не нужен, так как память по этому
	// адресу освобождается в main
	// delete textGen;
}
