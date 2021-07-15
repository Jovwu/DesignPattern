#pragma once
#include "decorator_my_os.h"
#include "my_os.h"
#include <iostream>
//给OS添加音效
class SoundEffect :public DecoratorMyOS {

public:

	SoundEffect(MyOS* myOS) :DecoratorMyOS(myOS) {}

	virtual bool startUp() {

		std::cout << "开机音效" << std::endl;
		this->myOS->startUp();
		return true;
	}

	virtual bool operation() {

		std::cout << "运行音效" << std::endl;
		this->myOS->operation();
		return true;
	}

	virtual bool shutdown() {

		std::cout << "关机音效" << std::endl;
		this->myOS->shutdown();
		return true;
	}
};

