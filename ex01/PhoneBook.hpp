#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>

class	Contact {
	private:
		int			PhoneNumber;
		std::string Name;
		std::string FirstName;
		std::string NickName;
		std::string DarkestSecret;
	public:
		Contact();
		~Contact();
		void	DisplayContact();
};

class	PhoneBook {
	private:
		Contact contacts[8];
	public:
		PhoneBook();
		~PhoneBook();
};

#endif