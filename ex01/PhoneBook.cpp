#include "PhoneBook.hpp"

Contact::Contact() :
	Name("Name"), FirstName("FirstName"), 
	NickName("NickName"), DarkestSecret("None"),
	PhoneNumber(000000) {}

Contact::~Contact() {}

PhoneBook::PhoneBook() {}

PhoneBook::~PhoneBook() {}

void	Contact::DisplayContact()
{
	std::cout << FirstName << std::endl;
	std::cout << Name << std::endl;
	std::cout << NickName << std::endl;
	std::cout << DarkestSecret << std::endl;
	std::cout << PhoneNumber << std::endl;
}