//Copyright [mainwindow.h] [NexusGrid] Licensed under the Apache License, Version 2.0 (the «License»);

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "player.h"
#include <QMainWindow>
#include <QLabel>
#include <QVector>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	void startGame();
	void endGame();
	void endGameSplit();
	void disabledButtons();
	void enabledButtons();
	void painter(QLabel &label, int value, int suit);
	explicit MainWindow(QWidget *parent = nullptr);
	~MainWindow();

private slots:
	void on_pushButton_drawMore_clicked();

	void on_pushButton_newgame_clicked();

	void on_pushButton_enough_clicked();

	void on_pushButton_surrender_clicked();

	void on_pushButton_double_clicked();

	void on_pushButton_split_clicked();

	void on_pushButton_SplitDrawLeft_clicked();

	void on_pushButton_SplitDrawRight_clicked();

	void on_pushButton_SplitEnoughLeft_clicked();

	void on_pushButton_SplitEnoughRight_clicked();

private:
	QVector<QWidget*> wVector;
	deck Deck;
	player Player;
	player Dealer;
	Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
