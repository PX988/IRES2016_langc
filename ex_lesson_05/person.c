#include <string.h>


#include "person.h"


void Person_setName(Person* this, char* name) {
	int length = sizeof(this->name)/sizeof(char);
	strncpy(this->name, name, length);
	this->name[length - 1] = '\0';
}


void Person_setSurname(Person* this, char* surname) {
	int length = sizeof(this->surname)/sizeof(char);
	strncpy(this->surname, surname, length);
	this->surname[length - 1] = '\0';
}


void Person_getBigliettoDaVisita(Person* this, char* bv) {
	strcpy(bv, this->name);
	strcat(bv, " ");
	strcat(bv, this->surname);
}
