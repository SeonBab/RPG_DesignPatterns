#include "WeaponBuilder.h"

WeaponBuilder::WeaponBuilder()
{
	Reset();
}

void WeaponBuilder::Reset()
{
	item = Item();
}

void WeaponBuilder::setName(const std::string& name)
{
	item.ItemName = name;
}

void WeaponBuilder::setHpRecovery(int hp)
{
	// ����� HP ȸ�� ����
}

void WeaponBuilder::setMpRecovery(int mp)
{
	// ����� MP ȸ�� ����
}

void WeaponBuilder::setAttackBoost(int atk)
{
	item.AttackBoost = atk;
}

void WeaponBuilder::setDefenseBoost(int def)
{
	item.DefenseBoost = def;
}

Item WeaponBuilder::build()
{
	return item;
}
