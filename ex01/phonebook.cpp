#include "phonebook.hpp"

bool is_valide(std::string choice)
{
	if (choice != "Add" || choice != "Exit" || choice != "Search")
		return (false);
	return (true);
}

void user_choice(std::string *choice)
{
	std::cout << "choose one of these options: " << std::endl;
	std::cout << "Add, Search, Exit" << std::endl;
	std::cin >> *choice;
}

int main(int ac, char **av)
{
	PhoneBook phonebook;
	std::string choice;

	user_choice(&choice);
	while (1)
	{
		if (choice == "Exit")
			std::cout << "test" << std::endl;
	}
	// std::cout << "the phonebook application" << std::endl;
	// phonebook.user_option(phonebook);
	// std::cout << "option: "<< phonebook.option << std::endl;
	// while (1)
	// {
	// 	if (phonebook.option == "Exit")
	// 	{
	// 		std::cout << "safi salina" << std::endl;
	// 		break ;
	// 	}
	// }
}	