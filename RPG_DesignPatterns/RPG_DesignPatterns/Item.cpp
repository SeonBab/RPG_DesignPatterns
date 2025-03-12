#include "Item.h"
#include <iostream>

Item::Item()
{
    ItemName = "";
    HpRecovery = 0;
    MpRecovery = 0;
    AttackBoost = 0;
    DefenseBoost = 0;
}

void Item::ShowInfo() const
{
    std::cout << "������: " << ItemName << std::endl;
    std::cout << "HP ȸ��: " << HpRecovery << ", MP ȸ��: " << MpRecovery << std::endl;
    std::cout << "���ݷ� ����: " << AttackBoost << ", ���� ����: " << DefenseBoost << std::endl;
}
