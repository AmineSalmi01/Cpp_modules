#include <iostream>
#include <string>

class Contacts {
private:
	std::string FirstName;
	std::string LastName;
	std::string NickName;
	std::string Secret;
	std::string PhoneNumber;
public:
	void setContact(const std::string &firstName, 
					const std::string &lastName,
					const std::string &nickName, 
					const std::string &phoneNumber,
					const std::string &secret) {
		FirstName = firstName;
		LastName = lastName;
		NickName = nickName;
		PhoneNumber = phoneNumber;
		Secret = secret;
	}

	void getContact()
	{
		std::cout << "First Name: " << FirstName << std::endl;
		std::cout << "Last  Name: " << LastName << std::endl;
		std::cout << "Nick  Name: " << NickName << std::endl;
		std::cout << "Dark  Secret: " << Secret << std::endl;
		std::cout << "Phone Number: " << PhoneNumber << std::endl;
	}
};