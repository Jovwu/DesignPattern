#pragma once
#include "my_os.h"
#include <iostream>
class MIUIOS :public MyOS {

public:

	virtual bool startUp() {

		std::cout << "MIUIOS����" << std::endl;
		return true;
	};

	virtual bool operation() {

		std::cout << "MIUIOS����" << std::endl;
		return true;
	};

	virtual bool shutdown() {

		std::cout << "MIUIOS�ػ�" << std::endl;
		return true;
	};

};