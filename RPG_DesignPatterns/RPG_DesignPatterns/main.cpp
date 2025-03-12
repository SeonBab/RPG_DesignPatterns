#include "Player.h"
#include "NormalState.h"
#include "Sword.h"
#include "MobBattleScenario.h"
#include "BossBattleScenario.h"
#include "PotionBuilder.h"
#include "WeaponBuilder.h"
#include "ItemDirector.h"
#include <iostream>

int main()
{
    Player CurPlayer(new NormalState, new Sword);

    std::cout << std::endl << "=== ���� ���� (���ø� �޼��� ����) ===" << std::endl;

    for (int i = 0; i < 3; ++i)
    {
        MobBattleScenario MobBattle(CurPlayer);
        MobBattle.RunScenario();
        std::cout << std::endl;
    }

    std::cout << std::endl << "=== ���� ���� (���ø� �޼��� ����) ===" << std::endl;
    BossBattleScenario BossBattle(CurPlayer);
    BossBattle.RunScenario();

    std::cout << std::endl << "=== ������ ���� (���� ����) ===" << std::endl;
    PotionBuilder potionBuilder;
    WeaponBuilder weaponBuilder;

    Item potion = ItemDirector::constructBasicHealingPotion(potionBuilder);
    Item sword = ItemDirector::constructIronSword(weaponBuilder);

    potion.ShowInfo();
    sword.ShowInfo();
}