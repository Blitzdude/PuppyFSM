#include <iostream>

#include "Puppy.h"
int main(int argc, char** argv)
{
	Puppy wuffles;

	int playerInput;

	// while wuffles is alive
	while (!wuffles.getCurrentState().getIsDead())
	{
		playerInput = 0;

		while (playerInput < 1 || playerInput > 3)
		{
			// does wuffles want food?
			if (wuffles.getCurrentState().getWantsFood())
			{
				std::cout << "Wuffles looks like he wants something to eat...\n\n";
			}

			// does wuffles want walkies?
			if (wuffles.getCurrentState().getWantsWalkies())
			{
				std::cout << "Wuffles looks like he wants to get out of the house... \n\n";
			}

			// ask for player input:

			std::cout << "If you want to take Wuffles for walkies, enter 1!\n";
			std::cout << "If you want to feed Wuffles, enter 2!\n";
			std::cout << "If you want to take Wuffles hunting, enter 3! \n\n";

			std::cin >> playerInput;

			
		}

		if (playerInput == 1)
		{
			wuffles.haveWalk();
			std::cout << "You took wuffles for a walk! He expended energy!\n";
		}

		if (playerInput == 2)
		{
			wuffles.eatFood();
			std::cout << "You fed Wuffles! He gained energy!\n";
		}

		if (playerInput == 3)
		{
			wuffles.haveWalk();
			wuffles.eatFood();
			std::cout << "You took Wuffles out hunting!" << "\n\n" <<
				"He expended energy to find a bunny rabbit, but gained energy by eating it!";
		}

		std::cout << "Enter any key to move on" << std::endl;
		
		std::cin.get();

		wuffles.updateState();


		
	}

	std::cout << "You let Wuffles die... How could you ;_;\n\n";

	std::cout << "Enter any key to close program, you heartless monster. \n";

	std::cin.get();

	return 0;
}