#pragma once

class WeaponStrategy;
class PlayerState;

class Player
{
public:
	Player(PlayerState* InitialState, WeaponStrategy* initialWeapon);

	void SetState(PlayerState* NewPlayerState);
	void SetWeapon(WeaponStrategy* NewWeaponStrategy);

	void Attack();
	void UseWeapon();

	int GetAttackCount() const;
	void SetAttackCount(int NewAttackCount);

private:
	WeaponStrategy* _WeaponStrategy;	// ���� ����
	PlayerState* CurrentState;	// ���� ����
	int AttackCount;
};