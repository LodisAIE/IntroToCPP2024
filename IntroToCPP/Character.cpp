#include "Character.h"
#include "Item.h"

Character::Character(const char* name, float health)
{
	m_name = name;
	m_health = health;
	m_damage = 10.0f;
	m_defense = 5.0f;
	m_strength = 10.0f;
	m_isAlive = true;
	m_item = nullptr;
}

Character::~Character()
{
	if (m_item)
	{
		delete m_item;
	}
}

float Character::getHealth()
{
	return m_health;
}

float Character::getStrength()
{
	return m_strength;
}

float Character::getDamage()
{
	return m_damage;
}

float Character::getDefense()
{
	return m_defense;
}

float Character::attack(Character* opponent)
{
	float totalDamage = getDamage() * m_strength;

	opponent->takeDamage(totalDamage);

	return totalDamage;
}

bool Character::getIsAlive()
{
	return m_isAlive;
}

float Character::takeDamage(float damage)
{
	float totalDamage = damage - m_defense;

	if (totalDamage < 0)
	{
		totalDamage = 0;
	}
	
	m_health -= totalDamage;

	return totalDamage;
}