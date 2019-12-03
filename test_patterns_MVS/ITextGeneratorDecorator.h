#pragma once

#include "ITextGenerator.h"

// ������� ����� ��� ���������� ���������� ������ � ������� � ������� �����-�� �������������� ����������
class ITextGeneratorDecorator : public ITextGenerator
{
public:
	virtual void printInfo() = 0;
};

