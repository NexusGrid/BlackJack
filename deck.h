//Copyright [deck.h] [NexusGrid] Licensed under the Apache License, Version 2.0 (the «License»);

#ifndef DECK_H
#define DECK_H
#define DECK_NUMBER 6 //Колтчество полных обычных колод в конечной колоде
#include <QString>
#include <QStack>

class deck
{
public:
	struct card
		{
			int suit;
			int value;
			int cost;
		};
	QStack<card> deckBody;

	deck();
	void newDeck();
	card drawCard();
};

#endif // DECK_H
