#include "Puppy.h"

Puppy::Puppy()
{
	hungry.setProperties(true, false, false);
	hunting.setProperties(true, true, false);
	bouncy.setProperties(false, true, false);
	dead.setProperties(false, false, true);

	energy = 3;

	updateState();
}

void Puppy::updateState()
{
	if (energy < 1)
	{
		currentState = dead;
		return;
	}
	else if (energy < 4)
	{
		currentState = hungry;
		return;
	}
	else if (energy < 7)
	{
		currentState = hunting;
		return;
	}
	else
	{
		currentState = bouncy;
		return;
	}
}
