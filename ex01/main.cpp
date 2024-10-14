#include "PhoneBook.hpp"

void clearScreen()
{
	// Efface l'écran et remet le curseur en haut à gauche
	std::cout << "\033[2J\033[1;1H";
}

void displayMenu()
{
	std::cout << "=====================\n";
	std::cout << "    PhoneBook CLI    \n";
	std::cout << "=====================\n";
	std::cout << "1. ADD\n";
	std::cout << "2. SEARCH\n";
	std::cout << "3. EXIT\n";
	std::cout << "=====================\n";
	std::cout << "Please choose an option (1-3): ";
}

int main()
{
	PhoneBook phoneBook;
	std::string choice;
	int			exit = 0;

	while (true)
	{
		if (exit == 1)
			break;
		clearScreen();
		displayMenu();
		std::getline(std::cin, choice);
		while (true)
		{
			if (choice == "1" || choice == "ADD")
			{
				clearScreen();
				std::cout << "You chose to ADD a contact.\n\n";
				std::getline(std::cin, choice);
				break;
			}
			else if (choice == "2" || choice == "SEARCH")
			{
				clearScreen();
				std::cout << "You chose to SEARCH for a contact.\n\n";
				break;
			}
			else if (choice == "3" || choice == "EXIT")
			{
				clearScreen();
				std::cout << "Exiting PhoneBook. Goodbye!\n";
				exit = 1;
				break;
			}
			else
			{
				std::cout << "Invalid choice. Please choose again.\n";
				std::cout << "Please choose an option (1-3): ";
				std::getline(std::cin, choice);
			}
		}
	}

	return 0;
}