#pragma once
#include "my_os.h"
//װ����
class DecoratorMyOS :public MyOS {

protected:

	MyOS* myOS;

	DecoratorMyOS(MyOS* myOS) :myOS(myOS) {}
};