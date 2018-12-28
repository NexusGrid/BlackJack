#include "player.h"

player::player()
{
	this->money = START_CASH;
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
	this->canSplit = false;
	this->canDouble = false;
}

