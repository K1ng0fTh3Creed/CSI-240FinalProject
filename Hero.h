#pragma once

class Hero
{
public:
	Hero(int hp, int dmg, int critRate, double critDMG){};
	~Hero(){};

protected:
	int mHP;
	int mDMG;
	int mCritRate;
	double mCritDMG;

	bool activateAbility();
};
