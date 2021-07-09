#include "strategy.cpp"
#include <iostream>
class AStrategy:public MyStrategy
{
public:
	AStrategy() {};
	~AStrategy() {};

	virtual bool run(int var) {
		
		std::cout << "AStrategy::run" << std::endl;
		return true;
	};

};

