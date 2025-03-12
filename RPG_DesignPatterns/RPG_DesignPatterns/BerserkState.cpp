#include "BerserkState.h"
#include "Player.h"
#include "NormalState.h"
#include <iostream>

void BerserkState::handleAttack(Player& player)
{
	std::cout << "[BerserkState] �÷��̾ �����մϴ�." << std::endl;
	// �÷��̾� ����� ����
	// �ش� ���¿����� 2ȸ ����
	player.UseWeapon();
	player.UseWeapon();

	// ���� Ƚ�� ����
	int CurPlayerAttackCount = player.GetAttackCount();
	++CurPlayerAttackCount;
	player.SetAttackCount(CurPlayerAttackCount);

	// ���� Ƚ���� Ư�� Ƚ�� �̻��̶�� NormalState�� ����
	if (3 <= CurPlayerAttackCount)
	{
		std::cout << "BerserkState���� NormalState�� ����˴ϴ�." << std::endl;

		player.SetState(new NormalState);
		player.SetAttackCount(0);
	}
}
