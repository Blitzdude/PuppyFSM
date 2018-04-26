#pragma once

#include <stdlib.h>
#include <iostream>

class State
{
public:
	State() {};
	~State() {};

	inline bool getWantsFood() { return wantsFood; };
	inline bool getWantsWalkies() { return wantsWalkies; };
	inline bool getIsDead() { return isDead; };

	inline void setProperties(bool setupWantsFood, bool setupWantsWalkies, bool setupIsDead)
	{
		wantsFood = setupWantsFood;
		wantsWalkies = setupWantsWalkies;
		isDead = setupIsDead;
	}

private:
	bool wantsFood;
	bool wantsWalkies;
	bool isDead;
};

