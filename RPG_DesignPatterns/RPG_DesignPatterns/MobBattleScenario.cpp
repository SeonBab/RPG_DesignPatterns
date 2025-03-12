#include "MobBattleScenario.h"
#include "Player.h"
#include <iostream>

MobBattleScenario::MobBattleScenario(Player& InitialPlayer) : BattleScenario(InitialPlayer)
{

}

void MobBattleScenario::Setup()
{
	std::cout << "���Ͱ� ��Ÿ�����ϴ�." << std::endl;
}

void MobBattleScenario::PlayerAction()
{
	std::cout << "�÷��̾ �ൿ�մϴ�." << std::endl;
	_Player.Attack();
}

void MobBattleScenario::EnemyAction()
{
	std::cout << "���Ͱ� �����մϴ�." << std::endl;
}

void MobBattleScenario::Conclude()
{
	std::cout << "���� ����" << std::endl;
}
