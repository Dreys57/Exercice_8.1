#pragma once
#include "map.h"
#include "player.h"

class Trap : public Map
{
public:
	Trap();
	~Trap() {};

	void DamagePlayer(int& health);

	int damage;
};
