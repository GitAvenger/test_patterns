#pragma once

// ��� ���������� ������ �������� sigleton
// �� �� ���������������� � ���������� ������ ����� ���� ������� � ������� delete
class SingletonClass
{
private:
	SingletonClass();

	static SingletonClass* _instance;

public:
	static SingletonClass* getInstance();

	~SingletonClass();
};

