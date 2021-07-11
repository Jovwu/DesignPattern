#pragma once
#include "observer.h"
#include <iostream>
class Reader :
    public Observer
{
public:

    Reader();
    bool update(void* var);

private:

};

