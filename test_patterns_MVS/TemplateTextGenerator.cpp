#include "stdafx.h"
#include "TemplateTextGenerator.h"

TemplateTextGenerator::TemplateTextGenerator()
{
}

TemplateTextGenerator::TemplateTextGenerator(std::string text)
{
	this->text = text;
}

std::string TemplateTextGenerator::getText()
{
	return "Hello!\n" + text + "\nWith best regards";
}

TemplateTextGenerator::~TemplateTextGenerator()
{
}
