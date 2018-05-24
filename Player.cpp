#include "Player.h"


Player::Player()
{
}


Player::~Player()
{
}

int Player::getMinGuess()
{
	return minGuess;
}

int Player::getMaxGuess()
{
	return maxGuess;
}

void Player::setMinGuess(int guess)
{
	minGuess = guess;
}

void Player::setMaxGuess(int guess)
{
	maxGuess = guess;
}