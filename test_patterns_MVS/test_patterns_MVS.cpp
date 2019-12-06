// test_patterns_MVS.cpp: определяет точку входа для консольного приложения.
//

#include <crtdbg.h>



#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <vector>

#include "SingletonClass.h"

#include "IdGenerator.h"
#include "IDelivery.h"
#include "IUnitDelivery.h"
#include "ExpressDelivery.h"
#include "ExperessDeliveryUnit.h"
#include "PostDelivery.h"
#include "PostDeliverUnit.h"
#include "PickupDelivery.h"
#include "PickupDeliveryUnit.h"

#include "DialogWindow.h"
#include "IComponentFactory.h"
#include "WinComponentFactory.h"
#include "LinuxComponentFactory.h"

#include "INewManInfo.h"
#include "ManInfo.h"
#include "ManInfoAdapter.h"
#include "Man.h"

#include "ITextGenerator.h"
#include "ITextGeneratorDecorator.h"
#include "TemplateTextGenerator.h"
#include "TemplateInfoCountSymbolTextGenerator.h"
#include "TemplateInfoCountRowTextGenerator.h"

#include "IUnit.h"
#include "PersonalUnit.h"
#include "DepartmentUnit.h"

#include "ICommand.h"
#include "CommandManager.h"
#include "TV.h"
#include "Console.h"
#include "CanalCommand.h"
#include "SoundCommand.h"
#include "OnCommand.h"

// инициализация диалога для примера абстрактной фабрики
void initializeDialog(DialogWindow& dlg, IComponentFactory* compFactory)
{
	dlg.btn = compFactory->createButton();
	dlg.radioBtn = compFactory->createRadioButton();
}

void manInfoPrint(INewManInfo& manInfo)
{
	std::cout << "Name: " << manInfo.getName() << std::endl << "Age: " << manInfo.getAge() << std::endl;
}

void executeExaples()
{
	// проверка работы синглтона

	SingletonClass* singleton1 = SingletonClass::getInstance();
	SingletonClass* singleton2 = SingletonClass::getInstance();
	std::cout << "singleton1 = " << singleton1 << std::endl;
	std::cout << "singleton2 = " << singleton2 << std::endl;

	// очистка памяти
	delete singleton1;

	// проверка работы фабричного метода

	std::vector<IDelivery*> deliveryList;

	IUnitDelivery* postDelivery = new PostDeliverUnit();
	IUnitDelivery* pickupDelivery = new PickupDeliveryUnit();
	IUnitDelivery* expressDelivery = new ExperessDeliveryUnit();

	deliveryList.push_back(postDelivery->createDelivery("Ивану (по почте)", "ул. Садовая, 5"));
	deliveryList.push_back(pickupDelivery->createDelivery("Николаю (самовывоз)"));
	deliveryList.push_back(expressDelivery->createDelivery("Андрею (доставка)", "ул. Парковая, 7"));

	for (int i = 0; i < deliveryList.size(); i++)
		std::cout << "id = " << deliveryList[i]->getId() << " Имя = " << deliveryList[i]->getName() << std::endl;

	// очистка памяти
	for (int i = 0; i < deliveryList.size(); i++)
		delete deliveryList[i];
	delete postDelivery;
	delete pickupDelivery;
	delete expressDelivery;
	delete IdGenerator::getInstance();

	// проверка работы абстрактной фабрики

	DialogWindow dlg;
	IComponentFactory* compFactory1 = new WinComponentFactory();
	IComponentFactory* compFactory2 = new LinuxComponentFactory();

	initializeDialog(dlg, compFactory1);

	// какой-то код, использующий диалоговое окно, например, отрисовывающий кнопки

	dlg.componentPaint();

	// очистка памяти
	delete compFactory1;
	delete compFactory2;

	// проверка работы адаптера

	char name[] = "Ivan Ivanovich";
	ManInfo manInfo1(name, 1995);
	manInfo1.print();

	ManInfoAdapter infoAdapter(&manInfo1);

	Man man("Petr Petrovich", 17);

	manInfoPrint(infoAdapter);
	manInfoPrint(man);

	// проверка работы декоратора

	ITextGenerator* textGen = new TemplateTextGenerator("Vi \n doljny pridti \n v 12.00");
	std::cout << textGen->getText() << std::endl;

	ITextGeneratorDecorator* textGenDecor1 = new TemplateInfoCountSymbolTextGenerator(textGen);
	std::cout << textGenDecor1->getText() << std::endl;

	ITextGeneratorDecorator* textGenDecor2 = new TemplateInfoCountRowTextGenerator(textGenDecor1);
	std::cout << textGenDecor2->getText() << std::endl;

	// очистка памяти
	delete textGenDecor2;
	textGenDecor2 = nullptr;
	delete textGenDecor1;
	textGenDecor1 = nullptr;
	delete textGen;
	textGen = nullptr;

	// древовидная структура для примера, реализующего паттерн компоновщик

	IUnit* personalUnit1 = new PersonalUnit(true, "sergeant Petrov");
	IUnit* personalUnit2 = new PersonalUnit(true, "ordinary Ivanov");
	IUnit* personalUnit3 = new PersonalUnit(true, "lieutenant Zloy");
	IUnit* personalUnit4 = new PersonalUnit(false, "ordinary Smirnov");
	IUnit* personalUnit5 = new PersonalUnit(true, "ordinary Pogudin");

	IUnit* personalUnit6 = new PersonalUnit(false, "sergeant Putin");
	IUnit* personalUnit7 = new PersonalUnit(false, "ordinary Sidorov");
	IUnit* personalUnit8 = new PersonalUnit(true, "lieutenant Glupyi");
	IUnit* personalUnit9 = new PersonalUnit(true, "ordinary Medvedev");
	IUnit* personalUnit10 = new PersonalUnit(false, "ordinary Borisov");

	IUnit* personalUnit11 = new PersonalUnit(true, "captain Maiskyi");
	IUnit* personalUnit12 = new PersonalUnit(false, "captain Bredov");
	IUnit* personalUnit13 = new PersonalUnit(true, "major Golovanov");

	DepartmentUnit* platoonUnit1 = new DepartmentUnit();
	DepartmentUnit* platoonUnit2 = new DepartmentUnit();

	DepartmentUnit* companyUnit = new DepartmentUnit();

	platoonUnit1->addUnit(personalUnit1);
	platoonUnit1->addUnit(personalUnit2);
	platoonUnit1->addUnit(personalUnit3);
	platoonUnit1->addUnit(personalUnit4);
	platoonUnit1->addUnit(personalUnit5);

	platoonUnit2->addUnit(personalUnit6);
	platoonUnit2->addUnit(personalUnit7);
	platoonUnit2->addUnit(personalUnit8);
	platoonUnit2->addUnit(personalUnit9);
	platoonUnit2->addUnit(personalUnit10);

	companyUnit->addUnit(platoonUnit1);
	companyUnit->addUnit(platoonUnit2);
	companyUnit->addUnit(personalUnit13);

	std::cout << "companyUnit->report() = " << companyUnit->report() << std::endl;

	// очистка памяти
	delete personalUnit1; delete personalUnit2; delete personalUnit3; delete personalUnit4; delete personalUnit5;
	delete personalUnit6; delete personalUnit7; delete personalUnit8; delete personalUnit9; delete personalUnit10; delete personalUnit11;
	delete personalUnit12; delete personalUnit13;
	delete platoonUnit1; delete platoonUnit2; delete companyUnit;

	// пример, реализующий паттерн команда

	TV tv;
	Console console;
	CommandManager cmdManager;


}

int main()
{
	_CrtMemState _ms;
	_CrtMemCheckpoint(&_ms);

	executeExaples();

	 system("pause");
	
	 _CrtMemDumpAllObjectsSince(&_ms);
    return 0;
}

