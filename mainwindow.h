#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	void startGame();
	void endGame();
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

private:
	Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
