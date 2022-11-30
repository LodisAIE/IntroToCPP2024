#pragma once

class Character
{
private:
	float m_health;
	float m_strength;
	float m_damage;
	float m_defense;
	bool m_isAlive;
	char m_name[8];

public:
	Character(const char name[], float health);

	float getHealth();
	float getStrength();
	float getDamage();
	float getDefense();
	bool getIsAlive();

	void printName();

	float attack(Character opponent);
	float takeDamage(float damage);
};

