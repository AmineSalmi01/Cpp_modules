#include "phonebook.hpp"

int PhoneBook::getIndex()
{
	return (index);
}

void PhoneBook::initIndex()
{
	index = 0;
}

void PhoneBook::setIndex()
{
	index = (index + 1) % 8;
}

void PhoneBook::AddContact()
{
	std::string firstName, lastName, nickName, secret, phoneNumber;

	std::cout << "Enter First Name: ";
	std::getline(std::cin, firstName);

	std::cout << "Enter Last Name: ";
	std::getline(std::cin, lastName);

	std::cout << "Enter Nick Name: ";
	std::getline(std::cin, nickName);

	std::cout << "Enter Phone Number: ";
	std::getline(std::cin, phoneNumber);

	std::cout << "Enter Secret: ";
	std::getline(std::cin, secret);

	if (firstName.empty() || lastName.empty()
		|| nickName.empty() || secret.empty()
		|| phoneNumber.empty())
	{
		std::cout << "\033[31m" <<  "Contact not added" << "\033[0m" << std::endl;
		return ;
	}
	contact[index].setContact(firstName, lastName, nickName, phoneNumber, secret);
	std::cout << "index ------> "<< index << std::endl;
	std::cout << "\033[32m" << "Contact Added successfully" << "\033[0m"<< std::endl;
}