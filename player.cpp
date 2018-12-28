//Copyright [player.cpp] [NexusGrid] Licensed under the Apache License, Version 2.0 (the «License»);

#include "player.h"

player::player()
{
	this->money = START_CASH;
	this->endSplit = false;

}

void player::drawMore(deck &Deck)
{
	this->card3 = Deck.drawCard();
}

void player::cleanHand()
{
	this->card1.~card();
	this->card2.~card();
	this->card3.~card();
	this->endSplit = false;
}

