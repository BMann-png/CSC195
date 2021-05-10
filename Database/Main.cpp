#include "Database.h"
#include <iostream>


int main()
{
	Database database;

	bool quit = false;
	while (!quit)
	{
		//display menu
		std::cout << "1) Create\n";
		std::cout << "2) Display All\n";
		std::cout << "3) Display Name\n";
		std::cout << "4) Display Type\n";
		std::cout << "5) Quit\n\n";

		std::cout << "enter selection: ";
		int selection;
		std::cin >> selection;

		switch (selection)
		{
		case 1: //Create
		{
			std::cout << "1) Bird\n";
			std::cout << "2) Mammal\n";
			int type;
			std::cin >> type;
			database.Add(static_cast<Animal::eType>(type));
		}
		break;
		case 2:
			database.DisplayAll();
			break;
		case 3:
		{
			std::cout << "enter name: ";
			std::string name;
			std::cin >> name;
			database.Display(name);
		}
		break;
		case 4:
		{
			std::cout << "1) Bird\n";
			std::cout << "2) Mammal\n";
			int type;
			std::cin >> type;
			database.Display(static_cast<Animal::eType>(type));
		}
		break;
		case 5:
			quit = true;
			break;
		}
	}
}
