#include "lib.cpp"
class App:public Lib
{
public:
	App() {};
	~App() {};

protected:

	virtual void step2() {
	
		std::cout << "����2" << std::endl;
	}

	virtual void step3() {

		std::cout << "����3" << std::endl;
	}

};

