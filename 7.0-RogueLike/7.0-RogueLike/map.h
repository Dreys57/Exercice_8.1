#pragma once
#include <iostream>
#include <vector>

class Player;
class Potion;
class Trap;

class Map
{
public:

	Map();
	Map(Player player, Potion potion, Trap trap);
	~Map() {};

	char sprite;

	char door = 'X';
	char wall = '#';
	char ground = '.';

	struct Position
	{
		int x;

		int y;
	};

	void GenerateWall();

	void PrintMap(Player player);

	void Menu(int playerHealth);

	void UpdateMap(Player player);

	bool isWall(int newPosX, int newPosY);

	bool isTrap(int newPosX, int newPosY, Trap trap);

	bool isPotion(int newPosX, int newPosY, Potion potion);

	bool hasWon(Player player, bool& win);

	std::vector<std::vector<char> > mapVec;

private:

	int length_ = 20;

	int width_ = 60;


};