#include "reader.h"

Reader::Reader()
{
}

bool Reader::update(void* var)
{
	std::cout << "获得消息：" << *((int*)var) << std::endl;
	return false;
}
