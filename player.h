#ifndef GAME_H
#define GAME_H
#define START_CASH 1000
#include "deck.h"

class player
{	
public:

	deck::card card1;
	deck::card card2;
	deck::card card3;
	int money;
	int set;
	int handCost;
	bool canSplit;
	bool canDouble;

	void cleanHand();
	void drawMore(deck &Deck);
	player();
};

#endif // GAME_H
