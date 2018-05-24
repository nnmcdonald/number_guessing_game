#pragma once
#include "Player.h"
class ComputerPlayer :
	public Player
{
public:
	ComputerPlayer();
	void makeGuess(int number);
};

