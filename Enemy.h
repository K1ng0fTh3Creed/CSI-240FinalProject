#pragma once

#include <string>

using namespace std;

class Enemy
{
public:
	Enemy(string enemyName, int hp, int dmg);
	~Enemy(){};

protected:
	string mEnemyname;
	int mHP;
	int mDMG;
};
