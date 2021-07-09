#pragma once
class MyStrategy
{
public:
	MyStrategy() {};

	virtual ~MyStrategy() {};

	virtual bool run(int var) = 0;
};
