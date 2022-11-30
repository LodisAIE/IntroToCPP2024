#include <iostream>
#include "Character.h"

int currentScene = 0;

void printNum(int num)
{
	std::cout << num;
}

int add(int a, int b)
{
	return a + b;
}

void printNums(int nums[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << nums[i] << std::endl;
	}
}

void printArr2D(int nums[][3], int arrCount)
{
	for (int i = 0; i < arrCount; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << nums[i][j] << std::endl;
		}
	}
}

void setArray(int a[], int b[], int size)
{
	for (int i = 0; i < size; i++)
	{
		a[i] = b[i];
	}
}

/// <summary>
/// Waits until a valid input is recieved after presenting a prompt.
/// </summary>
/// <param name="prompt">The description of the current question or situation.</param>
/// <param name="option1">The name of the first option the user can choose.</param>
/// <param name="option2">The name of the second option the user can choose.</param>
/// <returns>The number of the choice the user picked.</returns>
int getChoice(const char prompt[], const char option1[], const char option2[])
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

int main()
{
	Character fox = Character("C.Fox", 100);

	std::cout << "Welcome traveler! \n" << "Please tell me your name" << std::endl;

	char name[8];
	std::cin >> name;

	Character player = Character(name, 100);

	std::cout << "Hello ";
	player.printName();
	std::cout << std::endl;

	int choice = getChoice("You're walking past a fox in an alley. He's super cracked at fortnite my guy. \n He has a gun. What do you do?",
		"Use counter gun", "Talk it out");

	if (choice == 1)
	{
		float damage = fox.attack(player);
		std::cout << "Unfortunately you aren't quite as cracked my guy. You are shot and take " << damage << " damage." << std::endl;
	}
	else
	{
		std::cout << "You start talking and the fox slowly fades away. Your medication has just kicked in." << std::endl;
	}

	std::cout << player.getHealth();

	return 0;
}

