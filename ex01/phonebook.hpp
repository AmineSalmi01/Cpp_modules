#include <iostream>
#include <string>
#include "contact.hpp"

class PhoneBook {
private:

public:
	Contacts contact[8];
	int index;
	int nbContact;
	void AddContact();
	void initIndex();
	void setIndex();
	int getIndex();
	// void SearchContact();
};