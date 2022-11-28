#include <iostream>

int currentScene = 0;

float health = 100.0f;
float strength = 50.0f;
float damage = 10.0f;
bool isAlive = true;

char name[8] = "Player";

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
	std::cout << "Welcome traveler! \n" << "Please tell me your name" << std::endl;

	std::cin >> name;

	std::cout << "Hello " << name << "!";

	return 0;
}

