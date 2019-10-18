#include "map.h"
#include "player.h"
#include "potion.h"
#include "trap.h"


Map::Map()
{
	

	mapVec = std::vector<std::vector<char> >(length_, std::vector<char>(width_));

	for (int i = 0; i < length_; i++)
	{
		for (int j = 0; j < width_; j++)
		{
			mapVec[i][j] = ground;
		}
	}

	mapVec[19][58] = door;

	GenerateWall();

	
}

Map::Map(Player player, Potion potion, Trap trap): Map()
{
	int maxPotion = 5;
	int maxTrap = 10;

	mapVec[player.posPlayer.x][player.posPlayer.y] = player.sprite;

	for (int i = 0; i < maxPotion; i++)
	{
		mapVec[(rand() % 18) + 1][(rand() % 58) + 1] = potion.sprite;
	}

	for (int i = 0; i < maxTrap; i++)
	{
		mapVec[(rand() % 18) + 1][(rand() % 58) + 1] = trap.sprite;
	}
	
}

void Map::GenerateWall()
{
	//1st Wall
	mapVec[10][40] = wall;
	mapVec[10][39] = wall;
	mapVec[10][38] = wall;
	mapVec[10][37] = wall;
	mapVec[10][36] = wall;
	mapVec[10][35] = wall;
	mapVec[11][40] = wall;
	mapVec[11][39] = wall;
	mapVec[11][38] = wall;
	mapVec[11][37] = wall;
	mapVec[11][36] = wall;
	mapVec[11][35] = wall;
	mapVec[11][41] = wall;
	mapVec[11][42] = wall;
	mapVec[11][43] = wall;
	mapVec[11][44] = wall;
	mapVec[11][45] = wall;
	mapVec[11][46] = wall;

	//2nd Wall
	mapVec[5][22] = wall;
	mapVec[5][23] = wall;
	mapVec[5][24] = wall;
	mapVec[5][25] = wall;
	mapVec[5][26] = wall;
	mapVec[5][27] = wall;
	mapVec[5][28] = wall;
	mapVec[5][29] = wall;
	mapVec[5][30] = wall;
	mapVec[6][21] = wall;
	mapVec[6][22] = wall;
	mapVec[6][23] = wall;
	mapVec[6][24] = wall;
	mapVec[6][25] = wall;
	mapVec[6][26] = wall;

	//3rd Wall
	mapVec[12][35] = wall;
	mapVec[11][35] = wall;
	mapVec[10][35] = wall;
	mapVec[9][35] = wall;
	mapVec[8][35] = wall;
	mapVec[12][35] = wall;
	mapVec[11][34] = wall;
	mapVec[10][33] = wall;
	mapVec[9][32] = wall;
	mapVec[8][31] = wall;
	mapVec[11][36] = wall;
	mapVec[10][37] = wall;
	mapVec[9][38] = wall;
	mapVec[8][39] = wall;
	mapVec[7][40] = wall;

	//4th Wall
	mapVec[4][15] = wall;
	mapVec[4][16] = wall;
	mapVec[4][17] = wall;
	mapVec[4][18] = wall;
	mapVec[4][19] = wall;
	mapVec[4][20] = wall;
	mapVec[5][15] = wall;
	mapVec[5][16] = wall;
	mapVec[6][15] = wall;
	mapVec[6][16] = wall;
	mapVec[7][15] = wall;
	mapVec[7][16] = wall;
	mapVec[8][15] = wall;
	mapVec[8][16] = wall;
	mapVec[9][15] = wall;
	mapVec[9][16] = wall;
	mapVec[10][15] = wall;
	mapVec[10][16] = wall;

	//5th Wall
	mapVec[17][55] = wall;
	mapVec[17][54] = wall;
	mapVec[17][53] = wall;
	mapVec[17][52] = wall;
	mapVec[17][51] = wall;
	mapVec[17][50] = wall;
	mapVec[17][49] = wall;
	mapVec[16][55] = wall;
	mapVec[16][54] = wall;
	mapVec[16][53] = wall;
	mapVec[16][52] = wall;
	mapVec[16][51] = wall;
	mapVec[16][50] = wall;
	mapVec[16][49] = wall;
	mapVec[18][52] = wall;
	mapVec[15][52] = wall;
	mapVec[14][52] = wall;
	mapVec[18][51] = wall;
	mapVec[15][51] = wall;
	mapVec[14][51] = wall;
	mapVec[18][50] = wall;
	mapVec[15][50] = wall;
	mapVec[14][50] = wall;
	mapVec[15][49] = wall;
	mapVec[14][49] = wall;
	mapVec[15][48] = wall;
	mapVec[14][48] = wall;
	mapVec[15][47] = wall;
	mapVec[14][47] = wall;
	mapVec[15][46] = wall;
	mapVec[14][46] = wall;
	mapVec[15][45] = wall;
	mapVec[14][45] = wall;

	//6th Wall
	mapVec[17][25] = wall;
	mapVec[17][24] = wall;
	mapVec[17][23] = wall;
	mapVec[17][22] = wall;
	mapVec[17][21] = wall;
	mapVec[17][20] = wall;
	mapVec[17][19] = wall;
	mapVec[16][25] = wall;
	mapVec[16][24] = wall;
	mapVec[16][23] = wall;
	mapVec[16][22] = wall;
	mapVec[16][21] = wall;
	mapVec[16][20] = wall;
	mapVec[16][19] = wall;
	mapVec[18][22] = wall;
	mapVec[15][22] = wall;
	mapVec[14][22] = wall;
	mapVec[18][21] = wall;
	mapVec[15][21] = wall;
	mapVec[14][21] = wall;
	mapVec[18][20] = wall;
	mapVec[15][20] = wall;
	mapVec[14][20] = wall;
	mapVec[15][19] = wall;
	mapVec[14][19] = wall;
	mapVec[15][18] = wall;
	mapVec[14][18] = wall;
	mapVec[15][17] = wall;
	mapVec[14][17] = wall;
	mapVec[15][16] = wall;
	mapVec[14][16] = wall;
	mapVec[15][15] = wall;
	mapVec[14][15] = wall;

	//7th Wall
	mapVec[2][4] = wall;
	mapVec[2][5] = wall;
	mapVec[2][6] = wall;
	mapVec[2][7] = wall;
	mapVec[2][8] = wall;
	mapVec[2][9] = wall;
	mapVec[2][10] = wall;
	mapVec[2][11] = wall;
	mapVec[2][12] = wall;
	mapVec[2][13] = wall;
	mapVec[2][14] = wall;
	mapVec[2][15] = wall;
	mapVec[2][16] = wall;
	mapVec[2][17] = wall;
	mapVec[2][18] = wall;
	mapVec[2][19] = wall;
	mapVec[2][20] = wall;
	mapVec[2][21] = wall;
	mapVec[2][22] = wall;
	mapVec[2][23] = wall;
	mapVec[2][4] = wall;
	mapVec[3][4] = wall;
	mapVec[4][4] = wall;
	mapVec[5][4] = wall;
	mapVec[6][4] = wall;
	mapVec[7][4] = wall;
	mapVec[8][4] = wall;
	mapVec[9][4] = wall;
	mapVec[10][4] = wall;
	mapVec[11][4] = wall;
	mapVec[12][4] = wall;
	mapVec[13][4] = wall;
	mapVec[14][4] = wall;
	mapVec[15][4] = wall;
	mapVec[16][4] = wall;
	mapVec[17][4] = wall;
	mapVec[18][4] = wall;

	//8th Wall
	mapVec[1][52] = wall;
	mapVec[1][51] = wall;
	mapVec[1][50] = wall;
	mapVec[1][49] = wall;
	mapVec[1][48] = wall;
	mapVec[1][47] = wall;
	mapVec[1][46] = wall;
	mapVec[1][45] = wall;
	mapVec[1][44] = wall;
	mapVec[2][54] = wall;
	mapVec[2][55] = wall;
	mapVec[2][56] = wall;
	mapVec[2][57] = wall;
	mapVec[2][53] = wall;
	mapVec[2][52] = wall;
	mapVec[2][57] = wall;
	mapVec[3][57] = wall;
	mapVec[4][57] = wall;
	mapVec[5][57] = wall;
	mapVec[6][57] = wall;
	mapVec[7][57] = wall;
	mapVec[8][57] = wall;
	mapVec[9][57] = wall;
}

void Map::PrintMap(Player player)
{
	std::cout << "_______________________________________________________________\n";

	for (int i = 0; i < length_; i++)
	{
		std::cout << "| ";
		for (int j = 0; j < width_; j++)
		{
			std::cout << mapVec[i][j];
		}
		mapVec[player.posPlayer.x][player.posPlayer.y] = player.sprite;
		std::cout << " |" << "\n";
	}
	std::cout << "_______________________________________________________________\n";

}

void Map::Menu(int playerHealth)
{
	std::cout << " ________________________________________________________\n";
	std::cout << "|                                                        |\n";
	std::cout << "|                   Health :" << playerHealth << "                          |\n";
	std::cout << "|                                                        |\n";
	std::cout << "|         To move:                         Infos:        |\n";
	std::cout << "|                                                        |\n";
	std::cout << "|    w = up      s = down               @ = player       |\n";
	std::cout << "|    a = left    d = right              + = potion       |\n";
	std::cout << " ________________________________________________________\n";
}

void Map::UpdateMap(Player player)
{
	mapVec[player.posPlayer.x][player.posPlayer.y] = ground;
}

bool Map::isWall(int newPosX, int newPosY)
{
	return mapVec[newPosX][newPosY] == wall;
}


bool Map::isTrap(int newPosX, int newPosY, Trap trap)
{
	return mapVec[newPosX][newPosY] == trap.sprite;
}

bool Map::isPotion(int newPosX, int newPosY, Potion potion)
{
	return mapVec[newPosX][newPosY] == potion.sprite;
}

bool Map::hasWon(Player player, bool& win)
{
	if (mapVec[player.posPlayer.x][player.posPlayer.y] == door)
	{
		win = true;

		std::cout << "Congratulations, you have won!\n";
		system("pause");
	}
	else if (!player.isAlive())
	{
		std::cout << "Sorry, you are dead, it's game over for you\n";
		system("pause");
	}


	return win;
}