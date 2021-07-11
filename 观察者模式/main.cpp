#include "newspaper_office.h"
#include "reader.h"

int main() {

	NewspaperOffice* no = new NewspaperOffice(20);

	Reader* reader[10];

	for (int i = 0; i < 10; i++) {

		reader[i] = new Reader();
		no->attach(reader[i]);
	}

	no->notify();


	for (int i = 0; i < 10; i++)
	{
		delete reader[i];
	}

	delete no;

	return 0;
}