#include "newspaper_office.h"

NewspaperOffice::NewspaperOffice(int count)
{
	this->count = (int*)malloc(sizeof(int));
	*this->count = count;
}

void* NewspaperOffice::result()
{
	return (void*)this->count;
}
