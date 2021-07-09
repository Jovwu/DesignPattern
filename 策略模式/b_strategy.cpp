#include "strategy.cpp"
#include <iostream>
class BStrategy :public MyStrategy
{
public:
	BStrategy() {};
	~BStrategy() {};

	virtual bool run(int var) {

		std::cout << "AStrategy::run" << std::endl;

	};

};

