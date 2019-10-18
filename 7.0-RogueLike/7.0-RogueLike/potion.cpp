#include "potion.h"
#include "map.h"
#include "player.h"

Potion::Potion()
{
	sprite = '+';

	healthGain = 20;	
}

void Potion::RegenHealth(int& health)
{
	int maxHealth = 100;
	
	health += healthGain;

	if (health > maxHealth)
	{
		health = maxHealth;
	}

}

