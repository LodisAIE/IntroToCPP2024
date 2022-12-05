
#include "Player.h"
#include <iostream>

Player::Player(const char* name, float health) : Character(name, health)
{
}

int Player::getChoice(const char prompt[], const char option1[], const char option2[])
{
	int choice = 0;

	//Loop until a valid input is recieved.
	while (!choice)
	{
		//Updates the display to present the prompt and options.
		std::cout << prompt << std::endl;
		std::cout << "1." << option1 << std::endl;
		std::cout << "2." << option2 << std::endl;

		std::cin >> choice;

		//If the choice isn't an option...
		if (choice != 1 && choice != 2)
		{
			//...print an error message and reset the choice variable.
			std::cout << "Invalid input. \n Please input key 1 or 2." << std::endl;
			system("pause");

			choice = 0;
		}

		//Clear the screen before displaying the options again.
		system("cls");
	}

	return choice;
}