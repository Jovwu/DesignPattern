#pragma once
#include "observer.h"
#include <list>
class Client
{

public:

	//注册
	bool attach(Observer* observer);
	//取消注册
	bool detach(Observer* observer);
	//发送通知
	int notify();
protected:

	Client();
	virtual ~Client();
	
	//发送数据
	virtual void* result();

private:

	//观察者列表
	std::list<Observer*> observerList;

};
