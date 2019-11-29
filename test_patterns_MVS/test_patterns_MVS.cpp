// test_patterns_MVS.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <vector>

#include "SingletonClass.h"

#include "IDelivery.h"
#include "IUnitDelivery.h"
#include "ExpressDelivery.h"
#include "ExperessDeliveryUnit.h"
#include "PostDelivery.h"
#include "PostDeliverUnit.h"
#include "PickupDelivery.h"
#include "PickupDeliveryUnit.h"

int main()
{
	// проверка работы синглтона

	SingletonClass* singleton1 = SingletonClass::getInstance();
	SingletonClass* singleton2 = SingletonClass::getInstance();
	std::cout << "singleton1 = " << singleton1 << std::endl;
	std::cout << "singleton2 = " << singleton2 << std::endl;

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

	system("pause");
    return 0;
}

