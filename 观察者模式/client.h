#pragma once
#include "observer.h"
#include <list>
class Client
{

public:

	//ע��
	bool attach(Observer* observer);
	//ȡ��ע��
	bool detach(Observer* observer);
	//����֪ͨ
	int notify();
protected:

	Client();
	virtual ~Client();
	
	//��������
	virtual void* result();

private:

	//�۲����б�
	std::list<Observer*> observerList;

};
