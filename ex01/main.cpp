#include "Phonebook.hpp"
#include <iostream>
#include <string>

bool is_valide(std::string choice)
{

	if (choice == "Add" || choice == "Exit" || choice == "Search")
		return (true);
	return (false);
}

int user_choice(std::string &choice)
{
	std::getline(std::cin, choice);
	if (is_valide(choice) == false)
	{
		std::cout << "Bad option... !" << std::endl;
		return (0);
	}
	return (1);
}

int getValideIndex()
{
	int index;
	while (1)
	{
		std::cin >> index;
		// std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return (index);
	}
	return (index);
}

int main()
{
	PhoneBook phonebook;
	std::string choice;
	int index;

	std::cout << "choose one of these options: " << std::endl;
	std::cout << "Add - Search - Exit" << std::endl;
	phonebook.initIndex();
	index = 0;
	while (1)
	{
		if(!user_choice(choice))
			continue;
		if (choice == "Exit")
			break ;
		if (choice == "Add")
		{
			phonebook.addContact();
			phonebook.setIndex();
		}
		if (choice == "Search")
		{
			phonebook.displayContact();
			std::cout << "Enter index : ";
			index = getValideIndex();
			phonebook.displayDetails(index);
		}
	}
}
