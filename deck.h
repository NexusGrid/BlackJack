//Copyright [deck.h] [NexusGrid] Licensed under the Apache License, Version 2.0 (the «License»);

#ifndef DECK_H
#define DECK_H
#include <QString>
#include <QStack>

class deck
{
private:
	struct card
	{
		int suit;
		int value;
		int cost;
	};
	QStack<card> deckBody;
public:
	deck();
	void newDeck();
	card drawCard();
};

#endif // DECK_H
