#pragma once
#include "decorator_my_os.h"
#include "my_os.h"
#include <iostream>
//给OS添加动画
class Animation:public DecoratorMyOS{

public:

	Animation(MyOS* myOS) :DecoratorMyOS(myOS) {}

	virtual bool startUp() {

		std::cout << "开机动画" << std::endl;
		this->myOS->startUp();
		return true;
	}

	virtual bool operation() {

		std::cout << "运行动画" << std::endl;
		this->myOS->operation();
		return true;
	}

	virtual bool shutdown() {

		std::cout << "关机动画" << std::endl;
		this->myOS->shutdown();
		return true;
	}
};

