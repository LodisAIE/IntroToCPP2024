#include "Item.h"

Item::Item(const char* name, int useAmount, float cost)
{
	m_name = name;
	m_useAmount = useAmount;
	m_cost = cost;
	m_owner = nullptr;
}

Item::Item(const char* name, int useAmount, float cost, Character* owner)
{
	m_name = name;
	m_useAmount = useAmount;
	m_cost = cost;
	m_owner = owner;
}
