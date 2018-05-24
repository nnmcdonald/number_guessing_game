#pragma once
class Player
{
public:
	Player();
	~Player();
	bool win;
	int getMinGuess();
	int getMaxGuess();
	void setMinGuess(int guess);
	void setMaxGuess(int guess);
protected:
	int guess;
	int minGuess;
	int maxGuess;
};

