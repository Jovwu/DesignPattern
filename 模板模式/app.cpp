#include "lib.cpp"
class App:public Lib
{
public:
	App() {};
	~App() {};

protected:

	virtual void step2() {
	
		std::cout << "²½Öè2" << std::endl;
	}

	virtual void step3() {

		std::cout << "²½Öè3" << std::endl;
	}

};

