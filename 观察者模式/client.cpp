#include "client.h"

Client::Client()
{
}

Client::~Client()
{
}

bool Client::attach(Observer* observer)
{
	if (nullptr == observer)
		return false;

	this->observerList.push_back(observer);
	return true;
}

bool Client::detach(Observer* observer)
{
	if (nullptr == observer)
		return false;

	int count = this->observerList.size();

	this->observerList.remove(observer);

	return 
		count - this->observerList.size() == 0 ? false : true;

}

int Client::notify()
{
	std::list<Observer*>::iterator it;
	int count = 0;

	for (it = this->observerList.begin(); it != this->observerList.end(); it++)
		if ((*it)->update(this->result()))
			count++;

	return count;
}

void* Client::result()
{
	return nullptr;
}
