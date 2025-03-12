#include "BossBattleScenario.h"
#include "Player.h"
#include <iostream>

BossBattleScenario::BossBattleScenario(Player& InitialPlayer) : BattleScenario(InitialPlayer)
{

}

void BossBattleScenario::Setup()
{
	std::cout << "������ ��Ÿ�����ϴ�." << std::endl;
}

void BossBattleScenario::PlayerAction()
{
	std::cout << "�÷��̾ �ൿ�մϴ�." << std::endl;
	_Player.Attack();
}

void BossBattleScenario::EnemyAction()
{
	std::cout << "������ ������ ��ų�� ����մϴ�." << std::endl;
}

void BossBattleScenario::Conclude()
{
	std::cout << "���� ����" << std::endl;
}
