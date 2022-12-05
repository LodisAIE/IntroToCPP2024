
#include "Player.h"
#include <iostream>

int currentScene = 0;
Player* player;

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

int main()
{
	Character* fox = new Character("Fox", 100);

	//Displays start message.
	std::cout << "Welcome traveler! \n" << "Please tell me your name" << std::endl;

	//Initializes player using user input.
	char name[9];
	std::cin >> name;
	player = new Player(name, 100);

	std::cout << "Hello " << player->getName();
	std::cout << std::endl;

	//Display first encounter.
	int choice = player->getChoice("You're walking past a fox in an alley. He's super cracked at fortnite my guy. \n He has a gun. What do you do?",
		"Use counter gun", "Talk it out");
	//Print the a new statement based on the player's choice.
	if (choice == 1)
	{
		float damage = fox->attack(player);

		std::cout << "Unfortunately you aren't quite as cracked my guy. You are shot and take " << damage << " damage." << std::endl;
	}
	else
	{
		std::cout << "You start talking and the fox slowly fades away. Your medication has just kicked in." << std::endl;
	}

	std::cout << player->getHealth();

	return 0;
}

