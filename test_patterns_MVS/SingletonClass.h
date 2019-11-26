#pragma once

// это реализация самого простого sigleton
// он не потокобезопасный и выделенную память нужно явно удалять с помощью delete
class SingletonClass
{
private:
	SingletonClass();

	static SingletonClass* _instance;

public:
	static SingletonClass* getInstance();

	~SingletonClass();
};

