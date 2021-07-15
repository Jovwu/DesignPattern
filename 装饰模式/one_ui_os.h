#pragma once
#include "my_os.h"
#include <iostream>
class OneUIOS :public MyOS {

public:

	virtual bool startUp() {
		
		std::cout << "OneUIOS开机" << std::endl;
		return true;
	};

	virtual bool operation() {
		
		std::cout << "OneUIOS运行" << std::endl;
		return true;
	};

	virtual bool shutdown() {
		
		std::cout << "OneUIOS关机" << std::endl;
		return true;
	};

};