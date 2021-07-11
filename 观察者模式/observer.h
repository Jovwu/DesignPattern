#pragma once
class Observer
{
protected:
	virtual ~Observer() {};

public:
	virtual bool update(void* var) = 0;
};

