#pragma once
#include "map.h"
#include "potion.h"
#include "trap.h"
#include <iostream>
#include <vector>

class Map;

class Player : public Map
{
public:

	Player();
	~Player() {};

	int health;

	bool isAlive();

	void PickUp(Potion potion);

	void TakeDamage(Trap trap);

	void Move(Potion potion, Trap trap, Map& map);

	void TestMove(int newPosX, int newPosY, Potion potion, Trap trap, Map& map);

	Position posPlayer;

};