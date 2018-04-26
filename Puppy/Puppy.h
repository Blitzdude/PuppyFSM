#pragma once

#include <stdlib.h>
#include <iostream>

#include "State.h"

class Puppy
{
public:
	Puppy();
	~Puppy() {};

	void updateState();
	inline void eatFood() { energy++; };
	inline void haveWalk() { energy--; };

	inline State getCurrentState() { return currentState; };

private:
	int energy;
	State currentState;

	State hungry;
	State hunting;
	State bouncy;
	State dead;


};