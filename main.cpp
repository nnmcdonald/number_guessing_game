#pragma once
#include "ComputerPlayer.h"
#include "HumanPlayer.h"
#include <random>
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{

	int number;
	srand(time(NULL));
	number = rand() % 100 + 1;
	ComputerPlayer comp;
	HumanPlayer hum;
	cout << "Guess a number between 1 and 100" << endl;
	while (!comp.win && !hum.win)
	{
		//Human player's turn
		hum.makeGuess(number);

		//Goes to computer's turn if human player didn't win
		if (!hum.win)
		{
			comp.setMinGuess(hum.getMinGuess());
			comp.setMaxGuess(hum.getMaxGuess());
			comp.makeGuess(number);
			if (!comp.win)
			{
				hum.setMinGuess(comp.getMinGuess());
				hum.setMaxGuess(comp.getMaxGuess());
			}
		}
	}
	system("pause");
}
