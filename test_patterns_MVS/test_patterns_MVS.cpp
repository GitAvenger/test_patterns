// test_patterns_MVS.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include "SingletonClass.h"

int main()
{
	SingletonClass* singleton1 = SingletonClass::getInstance();
	SingletonClass* singleton2 = SingletonClass::getInstance();
	std::cout << "singleton1 = " << singleton1 << std::endl;
	std::cout << "singleton2 = " << singleton2 << std::endl;
	system("pause");
    return 0;
}

