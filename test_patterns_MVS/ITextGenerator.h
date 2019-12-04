#pragma once

#include<iostream>

// ������� ����� ��� ���������� ������� ������
class ITextGenerator
{
public:
	virtual std::string getText() = 0;

	std::string text;

	virtual ~ITextGenerator();
};

