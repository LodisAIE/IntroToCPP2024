#pragma once

class Character;

class Item
{
public:
	Item(const char* name, int useAmount, float cost);
	Item(const char* name, int useAmount, float cost, Character* owner);

	int getUseAmount() { return m_useAmount; };
	const char* getName() { return m_name; };
	float getCost() { return m_cost; };
	Character* getOwner() { return m_owner; };

	virtual void use() = 0;

private:
	int m_useAmount;
	const char* m_name;
	float m_cost;
	Character* m_owner;
};

