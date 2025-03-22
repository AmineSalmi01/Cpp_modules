#include "Contact.hpp"

int Contact::setContact()
{
	std::string value;
	do {
		std::cout << "Enter First Name: ";
		std::getline(std::cin, value);
		FirstName = value;
	}
	while (FirstName.empty());

	do {
		std::cout << "Enter Last Name: ";
		std::getline(std::cin, value);
		LastName = value;
	}
	while (LastName.empty());

	do {
		NickName = value;
		std::cout << "Enter Nick Name: ";
		std::getline(std::cin, value);
	}
	while (NickName.empty());

	do {
		std::cout << "Enter Phone Number: ";
		std::getline(std::cin, value);
		PhoneNumber = value;
	}
	while (PhoneNumber.empty());

	do {
		std::cout << "Enter darkest Secret: ";
		std::getline(std::cin, value);
		Secret = value;
	}
	while (Secret.empty());

	if (FirstName.empty() || LastName.empty()
		|| NickName.empty() || Secret.empty()
		|| PhoneNumber.empty())
	{
		return (1);
	}
	return (0);
}

std::string Contact::getContact(int status)
{
	if (status == 0)
		return (FirstName);
	if (status == 1)
		return (LastName);
	if (status == 2)
		return (NickName);
	if (status == 3)
		return (Secret);
	if (status == 4)
		return (PhoneNumber);
	return (NULL);
}
