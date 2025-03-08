#include "phonebook.hpp"

bool is_valide(std::string choice)
{
	if ((choice != "Add" && choice != "Exit" && choice != "Search"))
		return (false);
	return (true);
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

int main()
{
	PhoneBook phonebook;
	std::string choice;

	std::cout << "choose one of these options: " << std::endl;
	std::cout << "Add, Search, Exit" << std::endl;
	while (1)
	{
		if(!user_choice(choice))
			continue;
		if (choice == "Exit")
			break ;
		if (choice == "Add")
			phonebook.AddContact();
		if (choice == "Search")
			std::cout << "Search for Contact\n";
	}
}
