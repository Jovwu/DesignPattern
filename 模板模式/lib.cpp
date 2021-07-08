#include <iostream>
class Lib {

public:

	Lib() {};
	virtual ~Lib() {};

	void run() {

		this->step1();
		this->step2();
		this->step3();
		this->step4();
	};

protected:

	void step1() {

		std::cout << "²½Öè1" << std::endl;

	}

	virtual void step2() = 0;
	virtual void step3() = 0;

	void step4() {

		std::cout << "²½Öè4" << std::endl;
	}
};