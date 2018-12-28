//Copyright [player.h] [NexusGrid] Licensed under the Apache License, Version 2.0 (the «License»);

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
	deck::card cardSplitLeft2;
	deck::card cardSplitLeft3;
	deck::card cardSplitRight2;
	deck::card cardSplitRight3;
	int money;
	int set;
	int handCost;
	bool endSplit;

	void cleanHand();
	void drawMore(deck &Deck);
	player();
};

#endif // GAME_H
