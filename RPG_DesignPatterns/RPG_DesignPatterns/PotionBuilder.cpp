#include "PotionBuilder.h"

PotionBuilder::PotionBuilder()
{
	Reset();
}

void PotionBuilder::Reset()
{
	item = Item();
}

void PotionBuilder::setName(const std::string& name)
{
	item.ItemName = name;
}

void PotionBuilder::setHpRecovery(int hp)
{
	item.HpRecovery = hp;
}

void PotionBuilder::setMpRecovery(int mp)
{
	item.MpRecovery = mp;
}

void PotionBuilder::setAttackBoost(int atk)
{
	// ������ ���ݷ� ���� ����
}

void PotionBuilder::setDefenseBoost(int def)
{
	// ������ ���� ���� ����
}

Item PotionBuilder::build()
{
	return item;
}
