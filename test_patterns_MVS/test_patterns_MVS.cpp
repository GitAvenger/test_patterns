// test_patterns_MVS.cpp: ���������� ����� ����� ��� ����������� ����������.
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

#include "DialogWindow.h"
#include "IComponentFactory.h"
#include "WinComponentFactory.h"
#include "LinuxComponentFactory.h"

// ������������� ������� ��� ������� ����������� �������
void initializeDialog(DialogWindow& dlg, IComponentFactory* compFactory)
{
	dlg.btn = compFactory->createButton();
	dlg.radioBtn = compFactory->createRadioButton();
}

// ���������� �� ��������� �����

int main()
{
	// �������� ������ ���������

	SingletonClass* singleton1 = SingletonClass::getInstance();
	SingletonClass* singleton2 = SingletonClass::getInstance();
	std::cout << "singleton1 = " << singleton1 << std::endl;
	std::cout << "singleton2 = " << singleton2 << std::endl;

	delete singleton1;

	// �������� ������ ���������� ������

	std::vector<IDelivery*> deliveryList;

	IUnitDelivery* postDelivery = new PostDeliverUnit();
	IUnitDelivery* pickupDelivery = new PickupDeliveryUnit();
	IUnitDelivery* expressDelivery = new ExperessDeliveryUnit();

	deliveryList.push_back(postDelivery->createDelivery("����� (�� �����)", "��. �������, 5"));
	deliveryList.push_back(pickupDelivery->createDelivery("������� (���������)"));
	deliveryList.push_back(expressDelivery->createDelivery("������ (��������)", "��. ��������, 7"));

	for (int i = 0; i < deliveryList.size(); i++)
		std::cout << "id = " << deliveryList[i]->getId() << " ��� = " << deliveryList[i]->getName() << std::endl;

	delete postDelivery;
	delete pickupDelivery;
	delete expressDelivery;

	// �������� ������ ����������� �������

	DialogWindow dlg;
	IComponentFactory* compFactory1 = new WinComponentFactory();
	IComponentFactory* compFactory2 = new LinuxComponentFactory();

	initializeDialog(dlg, compFactory1);

	// �����-�� ���, ������������ ���������� ����, ��������, �������������� ������

	dlg.componentPaint();

	delete compFactory1;
	delete compFactory2;

	system("pause");
    return 0;
}

