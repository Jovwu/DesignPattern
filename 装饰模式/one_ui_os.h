#pragma once
#include "my_os.h"
#include <iostream>
class OneUIOS :public MyOS {

public:

	virtual bool startUp() {
		
		std::cout << "OneUIOS����" << std::endl;
		return true;
	};

	virtual bool operation() {
		
		std::cout << "OneUIOS����" << std::endl;
		return true;
	};

	virtual bool shutdown() {
		
		std::cout << "OneUIOS�ػ�" << std::endl;
		return true;
	};

};