#include <iostream>
#include "player.h"
#include "map.h"
#include "potion.h"
#include "trap.h"

Player::Player()
{
	sprite = '@';
	health = 100;

	posPlayer.x = 1;
	posPlayer.y = 1;

}

bool Player::isAlive()
{
	return health > 0;
}

void Player::PickUp(Potion potion)
{
	char pick;

	std::cout << "There is a potion there, do you want to pick it up? (y/n)\n";
	std::cin >> pick;

	switch (pick)
	{
	case 'y':

		potion.RegenHealth(health);

		system("pause");

		break;

	case 'n':

		std::cout << "Your choice.\n";

		system("pause");

		break;

	default:

		std::cout << "You missed a chance, now the potion is gone.\n";

		break;
	}
}

void Player::TakeDamage(Trap trap)
{
	std::cout << "You walked on a trap and lost" << trap.damage << "\n";

	trap.DamagePlayer(health);
}

void Player::Move(Potion potion, Trap trap, Map& map)
{
	char move;

	std::cin >> move;

	switch (move)
	{
	case('w'):

		TestMove(posPlayer.x - 1, posPlayer.y, potion, trap, map);

		break;

	case('a'):

		TestMove(posPlayer.x, posPlayer.y - 1, potion, trap, map);

		break;

	case('s'):

		TestMove(posPlayer.x + 1, posPlayer.y, potion, trap, map);

		break;

	case('d'):

		TestMove(posPlayer.x, posPlayer.y + 1, potion, trap, map);

		break;
	}
}

void Player::TestMove(int newPosX, int newPosY, Potion potion, Trap trap, Map& map)
{
	if (map.isWall(newPosX, newPosY))
	{
		std::cout << "There is a wall in your way, you can't go through.\n";

		system("pause");
	}
	else if (map.isPotion(newPosX, newPosY, potion))
	{
		PickUp(potion);

		posPlayer.x = newPosX;
		posPlayer.y = newPosY;
	}
	else if (map.isTrap(newPosX, newPosY, trap))
	{
		TakeDamage(trap);

		posPlayer.x = newPosX;
		posPlayer.y = newPosY;
	}
	else
	{
		posPlayer.x = newPosX;
		posPlayer.y = newPosY;
	}
}

