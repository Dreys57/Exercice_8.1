#include "potion.h"
#include "map.h"
#include "player.h"
#include "trap.h"

Trap::Trap()
{
	sprite = '. ';

	damage = 30;
}

void Trap::DamagePlayer(int& health)
{
	int minHealth = 0;

	health -= damage;

	if (health < minHealth)
	{
		health = minHealth;
	}
}
