#pragma once
#include "my_os.h"
#include <iostream>
class MIUIOS :public MyOS {

public:

	virtual bool startUp() {

		std::cout << "MIUIOS开机" << std::endl;
		return true;
	};

	virtual bool operation() {

		std::cout << "MIUIOS运行" << std::endl;
		return true;
	};

	virtual bool shutdown() {

		std::cout << "MIUIOS关机" << std::endl;
		return true;
	};

};