#include "ItemDirector.h"
#include "Item.h"
#include "ItemBuilder.h"

Item ItemDirector::constructBasicHealingPotion(ItemBuilder& builder)
{
    builder.setName("�⺻ ȸ�� ����");
    builder.setHpRecovery(50);
    builder.setMpRecovery(20);

    return builder.build();
}

Item ItemDirector::constructIronSword(ItemBuilder& builder)
{
    builder.setName("ö��");
    builder.setAttackBoost(10);
    builder.setDefenseBoost(2);
    
    return builder.build();
}
