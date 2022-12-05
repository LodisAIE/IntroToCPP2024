#pragma once
class Item;

class Character
{
public:
	Character(const char* name, float health);
	~Character();

	float getHealth();
	float getStrength();
	float getDamage();
	float getDefense();
	bool getIsAlive();

	const char* getName() { return m_name; }

	Item* getItem() { return m_item; };
	void setItem(Item* item) { m_item = item; };

	float attack(Character* opponent);
	float takeDamage(float damage);

private:
	float m_health;
	float m_strength;
	float m_damage;
	float m_defense;
	bool m_isAlive;
	const char* m_name;
	Item* m_item;
};

