#include "stdafx.h"
#include "TemplateInfoCountRowTextGenerator.h"
#include <algorithm>

TemplateInfoCountRowTextGenerator::TemplateInfoCountRowTextGenerator()
{
}

TemplateInfoCountRowTextGenerator::TemplateInfoCountRowTextGenerator(ITextGenerator* textGen) : textGen(textGen)
{
	this->text = textGen->text;
}

std::string TemplateInfoCountRowTextGenerator::getText()
{
	printInfo();
	return textGen->getText();
}

void TemplateInfoCountRowTextGenerator::printInfo()
{
	int count = 1;
	std::cout << "textGen->text.size(): " << text.size() << std::endl;
	for (std::size_t pos = 0; pos < text.size(); pos++)
	{
		pos = text.find('\n', pos);
		if (pos != std::string::npos)
		{
			++count;
		}
		else
		{
			break;
		}
	}

	std::cout << "Getting text with row count: " << count << std::endl;
}

TemplateInfoCountRowTextGenerator::~TemplateInfoCountRowTextGenerator()
{
}
