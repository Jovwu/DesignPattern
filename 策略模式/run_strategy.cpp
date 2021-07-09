#include "strategy.cpp"
class RunStrategy
{
public:

	RunStrategy(MyStrategy* strategy) {
		this->strategy = strategy;
	};
	~RunStrategy() {
		delete this->strategy;
	};

	void run() {

		this->strategy->run(0);
	}

private:

	MyStrategy* strategy;
};
