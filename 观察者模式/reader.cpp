#include "reader.h"

Reader::Reader()
{
}

bool Reader::update(void* var)
{
	std::cout << "�����Ϣ��" << *((int*)var) << std::endl;
	return false;
}
