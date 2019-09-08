#pragma once
#include <cstdlib>
#include "Creature.h"
#include "SoundManager.h"
#include "Enemy.h"

class Glob : public Enemy {
public:
	Glob(AnimationSet *animSet);

	void ChangeAnimation(int newState, bool resetAnim = true) override;

	void Update() override;
	void Die() override;

	void Think();
	void Telegraph();
	void Attack();	
	void UpdateAnimation();
	void UpdateDamages();

	enum State { IDLE, MOVE, ATTACK, TELEGRAPH, DEAD };
	enum Phase { NORMAL, CHASE };

	static int globsKilled;

};