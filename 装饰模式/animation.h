#pragma once
#include "decorator_my_os.h"
#include "my_os.h"
#include <iostream>
//��OS��Ӷ���
class Animation:public DecoratorMyOS{

public:

	Animation(MyOS* myOS) :DecoratorMyOS(myOS) {}

	virtual bool startUp() {

		std::cout << "��������" << std::endl;
		this->myOS->startUp();
		return true;
	}

	virtual bool operation() {

		std::cout << "���ж���" << std::endl;
		this->myOS->operation();
		return true;
	}

	virtual bool shutdown() {

		std::cout << "�ػ�����" << std::endl;
		this->myOS->shutdown();
		return true;
	}
};

