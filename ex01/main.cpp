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
	std::cout << "Add - Search - Exit" << std::endl;
	phonebook.initIndex();
	while (1)
	{
		if(!user_choice(choice))
			continue;
		if (choice == "Exit")
			break ;
		if (choice == "Add")
		{
			phonebook.AddContact();
			phonebook.setIndex();
			std::cout << "index: " << phonebook.getIndex() << std::endl;
		}
		if (choice == "Search")
		{
			for (int i = 0; i < phonebook.nbContact; i++)
			{
				std::cout << "contact --> " << i + 1 << std::endl;
				std::cout << "=====> " << phonebook.nbContact << std::endl;
				phonebook.contact[i].getContact();
			}
		}
	}
}
