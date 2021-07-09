#include "run_strategy.cpp"
#include "a_strategy.cpp"
#include "b_strategy.cpp"

int main() {

	MyStrategy* s = new AStrategy();

	RunStrategy* run_strategy = new RunStrategy(s);

	run_strategy->run();

	return 0;
}