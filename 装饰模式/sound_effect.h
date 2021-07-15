#pragma once
#include "decorator_my_os.h"
#include "my_os.h"
#include <iostream>
//��OS�����Ч
class SoundEffect :public DecoratorMyOS {

public:

	SoundEffect(MyOS* myOS) :DecoratorMyOS(myOS) {}

	virtual bool startUp() {

		std::cout << "������Ч" << std::endl;
		this->myOS->startUp();
		return true;
	}

	virtual bool operation() {

		std::cout << "������Ч" << std::endl;
		this->myOS->operation();
		return true;
	}

	virtual bool shutdown() {

		std::cout << "�ػ���Ч" << std::endl;
		this->myOS->shutdown();
		return true;
	}
};

