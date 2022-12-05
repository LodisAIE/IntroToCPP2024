#pragma once
#include "Character.h"

class Player : public Character
{
public:
	Player(const char* name, float health);

	/// <summary>
	/// Waits until a valid input is recieved after presenting a prompt.
	/// </summary>
	/// <param name="prompt">The description of the current question or situation.</param>
	/// <param name="option1">The name of the first option the user can choose.</param>
	/// <param name="option2">The name of the second option the user can choose.</param>
	/// <returns>The number of the choice the user picked.</returns>
	int getChoice(const char prompt[], const char option1[], const char option2[]);
};