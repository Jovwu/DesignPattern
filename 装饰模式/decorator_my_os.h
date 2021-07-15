#pragma once
#include "my_os.h"
//×°ÊÎÆ÷
class DecoratorMyOS :public MyOS {

protected:

	MyOS* myOS;

	DecoratorMyOS(MyOS* myOS) :myOS(myOS) {}
};