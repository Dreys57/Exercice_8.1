#pragma once
#include "map.h"
#include "player.h"

class Potion : public Map
{
public:
	Potion();
	~Potion() {};

	void RegenHealth(int& health);

	int healthGain;
};
