#pragma once
#include "client.h"
class NewspaperOffice :
    public Client
{
public:

    NewspaperOffice(int count);

protected:

    void* result();

private:

    int* count;
};

