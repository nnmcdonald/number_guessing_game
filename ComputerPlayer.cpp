#pragma once
#include "ComputerPlayer.h"
#include <cstdlib>
#include <iostream>
using namespace std;

ComputerPlayer::ComputerPlayer()
{
	win = false;
	minGuess = 1;
	maxGuess = 100;
}

void ComputerPlayer::makeGuess(int number)
{
	//Sets computer guess to a random number in the range specified by previous player guesses
	guess = rand() % (maxGuess - minGuess) + minGuess + 1;
	
	if (guess == maxGuess)
		guess -= 1;

	//Checks to see if computer won
	if (guess == number)
	{
		cout << "The computer guessed the number! it was: " << number << endl;
		cout << "Sorry, you lose." << endl;
		win = true;
	}

	//Sets the minimum guess
	else if (guess < number)
	{
		cout << "The computer guessed low: " << guess << endl;
		minGuess = guess;
	}

	//sets the maximum guess
	else
	{
		cout << "The computer guessed high: " << guess << endl;
		maxGuess = guess;
	}
}