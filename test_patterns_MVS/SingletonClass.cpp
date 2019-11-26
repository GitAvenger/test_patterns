#include "stdafx.h"
#include "SingletonClass.h"

// это определение статического члена класса, его объявление в .h файле
// статические члены класса не принадлежат какому-то объекту класса и
// обрабатываются как некие глобальные переменные с областью видимости и
// инициализируются в глобальной области видимости в таком формате
// с использованием оператора разрешения области видимости ::

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
