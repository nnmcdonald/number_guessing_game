#pragma once
#include "HumanPlayer.h"
#include <iostream>
using namespace std;

HumanPlayer::HumanPlayer()
{
	win = false;
	minGuess = 1;
	maxGuess = 100;
}

void HumanPlayer::makeGuess(int number)
{
	cout << "Please enter a guess." << endl;
	cin >> guess;

	//check for win
	if (guess == number)
	{
	cout << "Correct you win!" << endl;
	win = true;
	}

	//sets minumum guess
	else if (guess < number && guess > minGuess)
	{
	cout << "That guess is too low." << endl;
	minGuess = guess;
	}

	//sets maximum guess
	else if (guess > number && guess < maxGuess)
	{
	cout << "That guess is too high." << endl;
	maxGuess = guess;
	}
}
