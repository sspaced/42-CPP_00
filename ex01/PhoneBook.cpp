#include "PhoneBook.hpp"

Contact::Contact() : name("Name"), firstName("FirstName"),
					 nickName("NickName"), darkestSecret("None"),
					 phoneNumber("000000") {}

Contact::~Contact() {}

PhoneBook::PhoneBook() : nb_contact(0)
{
	for (int i = 0; i < 8; i++)
	{
		contactList[i] = Contact();
	}
}

PhoneBook::~PhoneBook() {}

void Contact::DisplayContact()
{
	std::cout << firstName << std::endl;
	std::cout << name << std::endl;
	std::cout << nickName << std::endl;
	std::cout << darkestSecret << std::endl;
	std::cout << phoneNumber << std::endl;
}

int	displayUntil(std::string str)
{
	if (str.length() <= 10)
	{
		std::cout << str;
		return str.length();
	}
	else
	{
		std::cout << str.substr(0, 9) << ".";
		return 10;
	}
}

int	Contact::displayField(std::string field_name)
{
	if (!field_name.compare("firstName"))
		return displayUntil(firstName);
	if (!field_name.compare("name"))
		return displayUntil(name);
	if (!field_name.compare("nickName"))
		return displayUntil(nickName);
	if (!field_name.compare("darkestSecret"))
		return displayUntil(darkestSecret);
	if (!field_name.compare("phoneNumber"))
		return displayUntil(phoneNumber);
	return 0;
}

void printSpace(int nb_space)
{
	for (int i = 0; i < nb_space; i++)
		std::cout << " ";
}

void Contact::displaySearchIndex(int index)
{
	int nb_space = 11;
	std::cout << "|";
	std::cout << index;
	printSpace(nb_space - 1);
	std::cout << "|";
	printSpace(nb_space - displayField("firstName"));
	std::cout << "|";
	printSpace(nb_space - displayField("name"));
	std::cout << "|";
	printSpace(nb_space - displayField("nickName"));
	std::cout << "|\n";
}

void Contact::SetContactInfo()
{
	std::string choice;
	std::cout << "Enter contact info ..." << std::endl;
	std::cout << "First name : ";
	std::getline(std::cin, choice);
	firstName = choice;

	std::cout << "Name : ";
	std::getline(std::cin, choice);
	name = choice;

	std::cout << "Nickname : ";
	std::getline(std::cin, choice);
	nickName = choice;

	std::cout << "Darkest secret : ";
	std::getline(std::cin, choice);
	darkestSecret = choice;

	std::cout << "Phone number : ";
	std::getline(std::cin, choice);
	phoneNumber = choice;
}

void PhoneBook::addContact(Contact contact)
{
	if (nb_contact == 8)
		contactList[0] = contact;
	contactList[nb_contact] = contact;
	nb_contact++;
}

void	PhoneBook::displayPhoneBook()
{
	std::cout << "|Index      |First name |Last name  |Nick name  |\n";
	for(int i = 0; i < 8; i++)
	{
		contactList[i].displaySearchIndex(i);
	}
	std::cout << "|-----------|-----------|-----------|-----------|\n";
}