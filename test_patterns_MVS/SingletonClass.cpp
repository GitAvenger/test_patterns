#include "stdafx.h"
#include "SingletonClass.h"

// ��� ����������� ������������ ����� ������, ��� ���������� � .h �����
// ����������� ����� ������ �� ����������� ������-�� ������� ������ �
// �������������� ��� ����� ���������� ���������� � �������� ��������� �
// ���������������� � ���������� ������� ��������� � ����� �������
// � �������������� ��������� ���������� ������� ��������� ::

SingletonClass* SingletonClass::_instance = nullptr;

SingletonClass::SingletonClass()
{
}


SingletonClass * SingletonClass::getInstance()
{
	if (!_instance)
		_instance = new SingletonClass();
	return _instance;
}

SingletonClass::~SingletonClass()
{
}
