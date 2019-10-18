#include "map.h"
#include "potion.h"
#include "trap.h"
#include "player.h"
#include <iostream>
#include <time.h>


int main()
{
	srand(time(NULL));

	Player player = Player();

	Potion potion = Potion();

	Trap trap = Trap();

	Map map = Map(player, potion, trap);



	bool win = false;

	while (!win && player.isAlive())
	{
		system("cls");

		map.PrintMap(player);

		map.Menu(player.health);

		map.UpdateMap(player);

		player.Move(potion, trap, map);

		map.hasWon(player, win);
	}

	system("pause");
	return EXIT_SUCCESS;
}