#include <iostream>
#include <string>
#include "contact.hpp"

class PhoneBook {
// public:
	// void user_choice(PhoneBook phonebook);
private:
	Contacts contact[8];

public:
	void AddContact();
};