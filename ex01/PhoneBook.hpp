#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>

class	Contact {
	private:
		std::string	phoneNumber;
		std::string name;
		std::string firstName;
		std::string nickName;
		std::string darkestSecret;
	public:
		Contact();
		~Contact();
		void	DisplayContact();
		void	SetContactInfo();
		int		displayField(std::string field_name);
		void	displaySearchIndex(int index);
};

class	PhoneBook {
	private:
		Contact contactList[8];
		int		nb_contact;
	public:
		PhoneBook();
		~PhoneBook();
		void	addContact(Contact contact);
		void	displayPhoneBook();
};

#endif