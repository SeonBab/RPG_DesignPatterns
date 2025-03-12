#include "NormalState.h"
#include "Player.h"
#include "BerserkState.h"
#include <iostream>

void NormalState::handleAttack(Player& player)
{
	std::cout << "[NormalState] �÷��̾ �����մϴ�." << std::endl;
	// �÷��̾� ����� ����
	player.UseWeapon();

	// ���� Ƚ�� ����
	int CurPlayerAttackCount = player.GetAttackCount();
	++CurPlayerAttackCount;
	player.SetAttackCount(CurPlayerAttackCount);

	// ���� Ƚ���� Ư�� Ƚ�� �̻��̶�� BerserkState�� ����
	if (3 <= CurPlayerAttackCount)
	{
		std::cout << "NormalState���� BerserkState�� ����˴ϴ�." << std::endl;

		player.SetState(new BerserkState);
		player.SetAttackCount(0);
	}
}
