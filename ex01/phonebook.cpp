#include "phonebook.hpp"

void PhoneBook::AddContact()
{
	std::string firstName, lastName, NickName, secret, phoneNumber;

	std::cout << "Enter First Name: ";
	std::getline(std::cin, firstName);

	std::cout << "Enter Last Name: ";
	std::getline(std::cin, lastName);

	std::cout << "Enter Nick Name: ";
	std::getline(std::cin, NickName);

	std::cout << "Enter Phone Number: ";
	std::getline(std::cin, phoneNumber);

	std::cout << "Enter Secret: ";
	std::getline(std::cin, secret);


	contact[0].setContact(firstName, lastName, NickName, phoneNumber, secret);
	std::cout << "Contact Added successfully" << std::endl;
	contact[0].getContact();
}