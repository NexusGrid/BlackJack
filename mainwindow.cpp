//Copyright [mainwindow.cpp] [NexusGrid] Licensed under the Apache License, Version 2.0 (the «License»);

#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::painter(QLabel &label, int value, int suit)
{
	enum cardSuits{clubs,diamonds,hearts,spades,back};
	if(suit == clubs)
	{
		switch(value)
		{
		case 2:
		{
			QPixmap tempPixMap(":/images/src/img/clubs2.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 3:
		{
			QPixmap tempPixMap(":/images/src/img/clubs3.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 4:
		{
			QPixmap tempPixMap(":/images/src/img/clubs4.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 5:
		{
			QPixmap tempPixMap(":/images/src/img/clubs5.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 6:
		{
			QPixmap tempPixMap(":/images/src/img/clubs6.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 7:
		{
			QPixmap tempPixMap(":/images/src/img/clubs7.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 8:
		{
			QPixmap tempPixMap(":/images/src/img/clubs8.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 9:
		{
			QPixmap tempPixMap(":/images/src/img/clubs9.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 10:
		{
			QPixmap tempPixMap(":/images/src/img/clubs10.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 11:
		{
			QPixmap tempPixMap(":/images/src/img/clubsJack.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 12:
		{
			QPixmap tempPixMap(":/images/src/img/clubsQueen.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 13:
		{
			QPixmap tempPixMap(":/images/src/img/clubsKing.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 14:
		{
			QPixmap tempPixMap(":/images/src/img/clubsAce.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		}
	}
	if(suit == diamonds)
	{
		switch(value)
		{
		case 2:
		{
			QPixmap tempPixMap(":/images/src/img/diamonds2.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 3:
		{
			QPixmap tempPixMap(":/images/src/img/diamonds3.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 4:
		{
			QPixmap tempPixMap(":/images/src/img/diamonds4.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 5:
		{
			QPixmap tempPixMap(":/images/src/img/diamonds5.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 6:
		{
			QPixmap tempPixMap(":/images/src/img/diamonds6.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 7:
		{
			QPixmap tempPixMap(":/images/src/img/diamonds7.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 8:
		{
			QPixmap tempPixMap(":/images/src/img/diamonds8.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 9:
		{
			QPixmap tempPixMap(":/images/src/img/diamonds9.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 10:
		{
			QPixmap tempPixMap(":/images/src/img/diamonds10.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 11:
		{
			QPixmap tempPixMap(":/images/src/img/diamondsJack.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 12:
		{
			QPixmap tempPixMap(":/images/src/img/diamondsQueen.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 13:
		{
			QPixmap tempPixMap(":/images/src/img/diamondsKing.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 14:
		{
			QPixmap tempPixMap(":/images/src/img/diamondsAce.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		}
	}
	if(suit == hearts)
	{
		switch(value)
		{
		case 2:
		{
			QPixmap tempPixMap(":/images/src/img/hearts2.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 3:
		{
			QPixmap tempPixMap(":/images/src/img/hearts3.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 4:
		{
			QPixmap tempPixMap(":/images/src/img/hearts4.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 5:
		{
			QPixmap tempPixMap(":/images/src/img/hearts5.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 6:
		{
			QPixmap tempPixMap(":/images/src/img/hearts6.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 7:
		{
			QPixmap tempPixMap(":/images/src/img/hearts7.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 8:
		{
			QPixmap tempPixMap(":/images/src/img/hearts8.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 9:
		{
			QPixmap tempPixMap(":/images/src/img/hearts9.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 10:
		{
			QPixmap tempPixMap(":/images/src/img/hearts10.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 11:
		{
			QPixmap tempPixMap(":/images/src/img/heartsJack.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 12:
		{
			QPixmap tempPixMap(":/images/src/img/heartsQueen.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 13:
		{
			QPixmap tempPixMap(":/images/src/img/heartsKing.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 14:
		{
			QPixmap tempPixMap(":/images/src/img/heartsAce.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		}
	}
	if(suit == spades)
	{
		switch(value)
		{
		case 2:
		{
			QPixmap tempPixMap(":/images/src/img/spades2.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 3:
		{
			QPixmap tempPixMap(":/images/src/img/spades3.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 4:
		{
			QPixmap tempPixMap(":/images/src/img/spades4.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 5:
		{
			QPixmap tempPixMap(":/images/src/img/spades5.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 6:
		{
			QPixmap tempPixMap(":/images/src/img/spades6.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 7:
		{
			QPixmap tempPixMap(":/images/src/img/spades7.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 8:
		{
			QPixmap tempPixMap(":/images/src/img/spades8.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 9:
		{
			QPixmap tempPixMap(":/images/src/img/spades9.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 10:
		{
			QPixmap tempPixMap(":/images/src/img/spades10.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 11:
		{
			QPixmap tempPixMap(":/images/src/img/spadesJack.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 12:
		{
			QPixmap tempPixMap(":/images/src/img/spadesQueen.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 13:
		{
			QPixmap tempPixMap(":/images/src/img/spadesKing.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		case 14:
		{
			QPixmap tempPixMap(":/images/src/img/spadesAce.png");
			int w = label.width();
			int h = label.height();
			label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
			break;
		}
		}
	}
	if(suit == back)
	{
		QPixmap tempPixMap(":/images/src/img/back.png");
		int w = label.width();
		int h = label.height();
		label.setPixmap(tempPixMap.scaled(w,h,Qt::KeepAspectRatio));
	}
}

void MainWindow::disabledButtons()
{
	ui->pushButton_surrender->setDisabled(true);
	ui->pushButton_split->setDisabled(true);
	ui->pushButton_double->setDisabled(true);
	ui->pushButton_enough->setDisabled(true);
	ui->pushButton_drawMore->setDisabled(true);
}

void MainWindow::enabledButtons()
{
	ui->pushButton_SplitEnoughLeft->setEnabled(true);
	ui->pushButton_SplitDrawRight->setEnabled(true);
	ui->pushButton_SplitEnoughRight->setEnabled(true);
	ui->pushButton_enough->setEnabled(true);
	ui->pushButton_double->setEnabled(true);
	ui->pushButton_drawMore->setEnabled(true);
	ui->pushButton_surrender->setEnabled(true);
}

void MainWindow::startGame()
{
	Player.set = ui->spinBox->value();
	Player.money -= Player.set;
	ui->cash->setNum(Player.money);
	Player.card1 = Deck.drawCard();
	Dealer.card1 = Deck.drawCard();
	Player.card2 = Deck.drawCard();
	Dealer.card2 = Deck.drawCard();
	Player.handCost = Player.card1.cost + Player.card2.cost;
	painter(*ui->handPlayer1,Player.card1.value,Player.card1.suit);
	ui->CardValuePlayer1->setNum(Player.card1.cost);
	painter(*ui->handPlayer2,Player.card2.value,Player.card2.suit);
	ui->CardValuePlayer2->setNum(Player.card2.cost);
	ui->CardValuePlayerTotal->setNum(Player.handCost);
	painter(*ui->handDealer1,Dealer.card1.value,Dealer.card1.suit);
	ui->CardValueDealer1->setNum(Dealer.card1.cost);
	painter(*ui->handDealer2,4,4);								//4 - номер рубашки, value в данном случае не имеет значения
	if(Player.card1.cost == Player.card2.cost){ui->pushButton_split->setEnabled(true);}
	if(Deck.deckBody.size() < (52 * DECK_NUMBER)/3){Deck.newDeck();}

}


MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	ui->output->setReadOnly(true);
	ui->spinBox->setRange(10,START_CASH);
	ui->cash->setNum(Player.money);
	this->disabledButtons();
	ui->pushButton_SplitDrawLeft->setVisible(false);
	ui->pushButton_SplitEnoughLeft->setVisible(false);
	ui->pushButton_SplitDrawRight->setVisible(false);
	ui->pushButton_SplitEnoughRight->setVisible(false);
	ui->splitLeftValue->setVisible(false);
	ui->splitRightValue->setVisible(false);

}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::on_pushButton_drawMore_clicked()
{
	this->disabledButtons();
	Player.drawMore(Deck);
	Player.handCost += Player.card3.cost;
	painter(*ui->handPlayer3,Player.card3.value,Player.card3.suit);
	ui->CardValuePlayer3->setNum(Player.card3.cost);
	ui->CardValuePlayerTotal->setNum(Player.handCost);
	if(Player.handCost > 21)
	{
		ui->output->append("Вы проиграли,перебор!");
		ui->spinBox->setEnabled(true);
		ui->cash->setNum(Player.money);
		return;
	}
	this->endGame();
}

void MainWindow::endGame()
{
	painter(*ui->handDealer2,Dealer.card2.value,Dealer.card2.suit);
	ui->CardValueDealer2->setNum(Dealer.card2.cost);
	Dealer.handCost = Dealer.card1.cost +  Dealer.card2.cost;
	ui->CardValueDealerTotal->setNum(Dealer.handCost);
	if(Player.handCost < Dealer.handCost && Dealer.handCost <= 21)
	{
		ui->output->append("Вы проиграли!");
		return;
	}
	if(Dealer.handCost < 17)
	{
		Dealer.card3 = Deck.drawCard();
		Dealer.handCost += Dealer.card3.cost;
		painter(*ui->handDealer3,Dealer.card3.value,Dealer.card3.suit);
		ui->CardValueDealer3->setNum(Dealer.card3.cost);
		ui->CardValueDealerTotal->setNum(Dealer.handCost);
		if(Dealer.handCost > 21)
		{
			ui->output->append("Вы выиграли!");
			Player.money+= (Player.set * 3 / 2 );
			ui->cash->setNum(Player.money);
			return;
		}

	}
	if(Player.handCost < Dealer.handCost)
	{
		ui->output->append("Вы проиграли!");
		ui->cash->setNum(Player.money);
		return;
	}
	if(Player.handCost > Dealer.handCost)
	{
		ui->output->append("Вы выиграли!");
		Player.money+= (Player.set *  3 / 2);
		ui->cash->setNum(Player.money);
		return;
	}
	if(Player.handCost == Dealer.handCost)
	{
		ui->output->append("Ничья!");
		Player.money+= (Player.set);
		ui->cash->setNum(Player.money);
		return;
	}
}

void MainWindow::on_pushButton_newgame_clicked()
{
	foreach(QWidget* w,wVector)
	{
		w->~QWidget();
	}
	wVector.clear();
	Player.cleanHand();
	ui->handPlayer1->clear();
	ui->handPlayer2->clear();
	ui->handPlayer3->clear();
	ui->CardValuePlayer1->clear();
	ui->CardValuePlayer2->clear();
	ui->CardValuePlayer3->clear();
	ui->CardValuePlayerTotal->clear();
	Dealer.cleanHand();
	ui->handDealer1->clear();
	ui->handDealer2->clear();
	ui->handDealer3->clear();
	ui->CardValueDealer1->clear();
	ui->CardValueDealer2->clear();
	ui->CardValueDealer3->clear();
	ui->CardValueDealerTotal->clear();
	ui->output->clear();
	ui->pushButton_SplitDrawLeft->setVisible(false);
	ui->pushButton_SplitEnoughLeft->setVisible(false);
	ui->pushButton_SplitDrawRight->setVisible(false);
	ui->pushButton_SplitEnoughRight->setVisible(false);
	ui->splitLeftValue->setVisible(false);
	ui->splitRightValue->setVisible(false);
	this->enabledButtons();
	this->startGame();
}

void MainWindow::on_pushButton_enough_clicked()
{
	disabledButtons();
	this->endGame();
}

void MainWindow::on_pushButton_surrender_clicked()
{
	disabledButtons();
	Player.money+= (Player.set / 2);
	ui->cash->setNum(Player.money);
}

void MainWindow::on_pushButton_double_clicked()
{
	Player.money -= Player.set;
	Player.set += Player.set;
	on_pushButton_drawMore_clicked();
}

void MainWindow::on_pushButton_split_clicked()
{
	this->disabledButtons();
	ui->splitLeftValue->setVisible(true);
	ui->splitRightValue->setVisible(true);
	ui->pushButton_SplitDrawLeft->setVisible(true);
	ui->pushButton_SplitEnoughLeft->setVisible(true);
	ui->pushButton_SplitDrawRight->setVisible(true);
	ui->pushButton_SplitEnoughRight->setVisible(true);
	Player.money -= Player.set;
	ui->cash->setNum(Player.money);
	Player.cardSplitLeft2 = Deck.drawCard();
	Player.cardSplitRight2 = Deck.drawCard();
	int leftHandCost = Player.card1.cost + Player.cardSplitLeft2.cost;
	int rightHandCost = Player.card2.cost + Player.cardSplitRight2.cost;
	QLabel *card1Left = new QLabel(this);
	QLabel *card2Left = new QLabel(this);
	QLabel *card1Right = new QLabel(this);
	QLabel *card2Right = new QLabel(this);
	wVector.push_back(card1Left);
	wVector.push_back(card2Left);
	wVector.push_back(card1Right);
	wVector.push_back(card2Right);
	card1Left->setGeometry(800,380,136,189);
	card2Left->setGeometry(800,340,136,189);
	card1Right->setGeometry(960,380,136,189);
	card2Right->setGeometry(960,340,136,189);
	card1Left->setStyleSheet("QLabel {"
							 "border-style: solid;"
							 "border-width: 1px;"
							 "border-color: black; "
							 "}");
	card2Left->setStyleSheet("QLabel {"
							 "border-style: solid;"
							 "border-width: 1px;"
							 "border-color: black; "
							 "}");
	card1Right->setStyleSheet("QLabel {"
							 "border-style: solid;"
							 "border-width: 1px;"
							 "border-color: black; "
							 "}");
	card2Right->setStyleSheet("QLabel {"
							 "border-style: solid;"
							 "border-width: 1px;"
							 "border-color: black; "
							 "}");
	painter(*card1Left,Player.card1.value,Player.card1.suit);
	painter(*card2Left,Player.cardSplitLeft2.value,Player.cardSplitLeft2.suit);
	painter(*card1Right,Player.card2.value,Player.card2.suit);
	painter(*card2Right,Player.cardSplitRight2.value,Player.cardSplitRight2.suit);
	card1Left->show();
	card2Left->show();
	card1Right->show();
	card2Right->show();
	ui->splitLeftValue->setNum(leftHandCost);
	ui->splitRightValue->setNum(rightHandCost);
}

void MainWindow::on_pushButton_SplitDrawLeft_clicked()
{
	ui->pushButton_SplitDrawLeft->setDisabled(true);
	ui->pushButton_SplitEnoughLeft->setDisabled(true);
	Player.cardSplitLeft3 = Deck.drawCard();
	QLabel *card3Left = new QLabel(this);
	wVector.push_back(card3Left);
	card3Left->setGeometry(800,300,136,189);
	card3Left->setStyleSheet("QLabel {"
							 "border-style: solid;"
							 "border-width: 1px;"
							 "border-color: black; "
							 "}");
	int leftHandCost = Player.card1.cost + Player.cardSplitLeft2.cost + Player.cardSplitLeft3.cost;
	painter(*card3Left,Player.cardSplitLeft3.value,Player.cardSplitLeft3.suit);
	ui->splitLeftValue->setNum(leftHandCost);
	card3Left->show();
	if(Player.endSplit)
	{
		this->endGameSplit();
		return;
	}
	Player.endSplit = true;
}

void MainWindow::on_pushButton_SplitDrawRight_clicked()
{
	ui->pushButton_SplitDrawRight->setDisabled(true);
	ui->pushButton_SplitEnoughRight->setDisabled(true);
	Player.cardSplitRight3 = Deck.drawCard();
	QLabel *card3Right = new QLabel(this);
	wVector.push_back(card3Right);
	card3Right->setGeometry(960,300,136,189);
	card3Right->setStyleSheet("QLabel {"
							 "border-style: solid;"
							 "border-width: 1px;"
							 "border-color: black; "
							 "}");
	int RightHandCost = Player.card2.cost + Player.cardSplitRight2.cost + Player.cardSplitRight3.cost;
	painter(*card3Right,Player.cardSplitRight3.value,Player.cardSplitRight3.suit);
	ui->splitRightValue->setNum(RightHandCost);
	card3Right->show();
	if(Player.endSplit)
	{
		this->endGameSplit();
		return;
	}
	Player.endSplit = true;
}

void MainWindow::endGameSplit()
{
	bool leftHandLoose = false;
	bool rightHandLoose = false;
	int leftHandCost = Player.card1.cost + Player.cardSplitLeft2.cost + Player.cardSplitLeft3.cost;
	int rightHandCost = Player.card2.cost + Player.cardSplitRight2.cost + Player.cardSplitRight3.cost;
	painter(*ui->handDealer2,Dealer.card2.value,Dealer.card2.suit);
	ui->CardValueDealer2->setNum(Dealer.card2.cost);
	Dealer.handCost = Dealer.card1.cost +  Dealer.card2.cost;
	ui->CardValueDealerTotal->setNum(Dealer.handCost);
	if((leftHandCost < Dealer.handCost && Dealer.handCost <= 21) || (leftHandCost > 21 && Dealer.handCost <= 21))
	{
		ui->output->append("Вы проиграли в левой руке!");
		leftHandLoose = true;
	}
	if((rightHandCost < Dealer.handCost && Dealer.handCost <= 21) || (rightHandCost > 21 && Dealer.handCost <= 21))
	{
		ui->output->append("Вы проиграли в правой руке!");
		if(leftHandLoose){return;}
		rightHandLoose = true;
	}
	if(Dealer.handCost < 17)
	{
		Dealer.card3 = Deck.drawCard();
		Dealer.handCost += Dealer.card3.cost;
		painter(*ui->handDealer3,Dealer.card3.value,Dealer.card3.suit);
		ui->CardValueDealer3->setNum(Dealer.card3.cost);
		ui->CardValueDealerTotal->setNum(Dealer.handCost);
		if(Dealer.handCost > 21)
		{
			if(leftHandCost <= 21)
			{
				ui->output->append("Вы выиграли в левой руке!");
				Player.money+= (Player.set * 3 / 2 );
			}
			if(rightHandCost <= 21)
			{
				ui->output->append("Вы выиграли в правой руке!");
				Player.money+= (Player.set * 3 / 2 );
			}
			ui->cash->setNum(Player.money);
			return;
		}

	}
	if(leftHandCost < Dealer.handCost && !leftHandLoose)
	{
		ui->output->append("Вы проиграли в левой руке!");
		if(rightHandLoose){return;}
		leftHandLoose = true;
	}
	if(rightHandCost < Dealer.handCost && !rightHandLoose)
	{
		ui->output->append("Вы проиграли в правой руке!");
		if(leftHandLoose){return;}
		rightHandLoose = true;
	}
	if(leftHandCost > Dealer.handCost && !leftHandLoose)
	{
		ui->output->append("Вы выиграли в левой руке!");
		Player.money+= (Player.set *  3 / 2);
		ui->cash->setNum(Player.money);
	}
	if(rightHandCost > Dealer.handCost && !rightHandLoose)
	{
		ui->output->append("Вы выиграли в правой руке!");
		Player.money+= (Player.set *  3 / 2);
		ui->cash->setNum(Player.money);
	}
	if(leftHandCost == Dealer.handCost && !leftHandLoose)
	{
		ui->output->append("Ничья в левой руке!");
		Player.money+= Player.set;
		ui->cash->setNum(Player.money);
	}
	if(rightHandCost == Dealer.handCost && !rightHandLoose)
	{
		ui->output->append("Ничья в правой руке!");
		Player.money+= Player.set;
		ui->cash->setNum(Player.money);
	}
}

void MainWindow::on_pushButton_SplitEnoughLeft_clicked()
{
	ui->pushButton_SplitDrawLeft->setDisabled(true);
	ui->pushButton_SplitEnoughLeft->setDisabled(true);
	Player.cardSplitLeft3.cost = 0;
	if(Player.endSplit)
	{
		this->endGameSplit();
		return;
	}
	Player.endSplit = true;
}

void MainWindow::on_pushButton_SplitEnoughRight_clicked()
{
	ui->pushButton_SplitDrawRight->setDisabled(true);
	ui->pushButton_SplitEnoughRight->setDisabled(true);
	Player.cardSplitRight3.cost = 0;
	if(Player.endSplit)
	{
		this->endGameSplit();
		return;
	}
	Player.endSplit = true;
}
