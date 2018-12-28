//Copyright [deck.cpp] [NexusGrid] Licensed under the Apache License, Version 2.0 (the «License»);


#include "deck.h"
#include <QStack>
#include <QVector>
#include <QDebug>
#include <QTime>

deck::deck()
{
	newDeck();
}

void deck::newDeck()
{
	QVector<card> temp;
	enum cardSuits{clubs,diamonds,hearts,spades};
	for(int i = 0; i < DECK_NUMBER; i++)				//создание колоды, 2-10 числа, 11-14 картинки
	{													//трефы
		for(int i = 2; i < 15; i++)
		{
			card tempCard;
			tempCard.value = i;
			tempCard.suit = clubs;
			if(i < 11){tempCard.cost = i;}
			else if(i >= 11 && i < 14){tempCard.cost = 10;}
			else if(i == 14){tempCard.cost = 11;}
			temp.push_back(tempCard);
		}
	}

	for(int i = 0; i < DECK_NUMBER; i++)				//бубны
	{
		for(int i = 2; i < 15; i++)
		{
			card tempCard;
			tempCard.value = i;
			tempCard.suit = diamonds;
			if(i < 11){tempCard.cost = i;}
			else if(i >= 11 && i < 14){tempCard.cost = 10;}
			else if(i == 14){tempCard.cost = 11;}
			temp.push_back(tempCard);
		}
	}

	for(int i = 0; i < DECK_NUMBER; i++)				//червы
	{
		for(int i = 2; i < 15; i++)
		{
			card tempCard;
			tempCard.value = i;
			tempCard.suit = hearts;
			if(i < 11){tempCard.cost = i;}
			else if(i >= 11 && i < 14){tempCard.cost = 10;}
			else if(i == 14){tempCard.cost = 11;}
			temp.push_back(tempCard);
		}
	}

	for(int i = 0; i < DECK_NUMBER; i++)				//пики
	{
		for(int i = 2; i < 15; i++)
		{
			card tempCard;
			tempCard.value = i;
			tempCard.suit = spades;
			if(i < 11){tempCard.cost = i;}
			else if(i >= 11 && i < 14){tempCard.cost = 10;}
			else if(i == 14){tempCard.cost = 11;}
			temp.push_back(tempCard);
		}
	}

	for(int i = 0; i < temp.length();)							//рандомизация и перенос колоды из вектора в стэк
	{
		qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
		int tempRand = qrand() % temp.length();
		deckBody.push(temp[tempRand]);
		temp.remove(tempRand);
	}

}

deck::card deck::drawCard()
{
	return(deckBody.pop());
}
