/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *hand_player;
    QLabel *handPlayer1;
    QLabel *handPlayer2;
    QLabel *handPlayer3;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *buttons;
    QPushButton *pushButton_drawMore;
    QPushButton *pushButton_enough;
    QPushButton *pushButton_surrender;
    QPushButton *pushButton_double;
    QPushButton *pushButton_split;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *hand_diller;
    QLabel *handDealer1;
    QLabel *handDealer2;
    QLabel *handDealer3;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *CardValuePlayerTotal;
    QLabel *CardValuePlayer2;
    QLabel *CardValuePlayer3;
    QLabel *CardValuePlayer1;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *CardValueDealer1;
    QLabel *CardValueDealer3;
    QLabel *CardValueDealer2;
    QLabel *CardValueDealerTotal;
    QTextBrowser *output;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_newgame;
    QSpinBox *spinBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *cash;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout;
    QLabel *splitLeftValue;
    QPushButton *pushButton_SplitDrawLeft;
    QPushButton *pushButton_SplitEnoughLeft;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *splitRightValue;
    QPushButton *pushButton_SplitDrawRight;
    QPushButton *pushButton_SplitEnoughRight;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1119, 676);
        MainWindow->setMinimumSize(QSize(1119, 676));
        MainWindow->setMaximumSize(QSize(1119, 676));
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(171, 171, 171);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(310, 420, 422, 191));
        hand_player = new QHBoxLayout(horizontalLayoutWidget);
        hand_player->setSpacing(6);
        hand_player->setContentsMargins(11, 11, 11, 11);
        hand_player->setObjectName(QStringLiteral("hand_player"));
        hand_player->setContentsMargins(0, 0, 0, 0);
        handPlayer1 = new QLabel(horizontalLayoutWidget);
        handPlayer1->setObjectName(QStringLiteral("handPlayer1"));
        handPlayer1->setEnabled(true);
        handPlayer1->setMinimumSize(QSize(136, 189));
        handPlayer1->setMaximumSize(QSize(136, 189));
        handPlayer1->setStyleSheet(QLatin1String("border-style: solid;\n"
"border-width: 1px;\n"
"border-color: black;"));

        hand_player->addWidget(handPlayer1);

        handPlayer2 = new QLabel(horizontalLayoutWidget);
        handPlayer2->setObjectName(QStringLiteral("handPlayer2"));
        handPlayer2->setMinimumSize(QSize(136, 189));
        handPlayer2->setMaximumSize(QSize(136, 189));
        handPlayer2->setStyleSheet(QLatin1String("border-style: solid;\n"
"border-width: 1px;\n"
"border-color: black;"));

        hand_player->addWidget(handPlayer2);

        handPlayer3 = new QLabel(horizontalLayoutWidget);
        handPlayer3->setObjectName(QStringLiteral("handPlayer3"));
        handPlayer3->setMinimumSize(QSize(136, 189));
        handPlayer3->setMaximumSize(QSize(136, 189));
        handPlayer3->setStyleSheet(QLatin1String("border-style: solid;\n"
"border-width: 1px;\n"
"border-color: black;"));

        hand_player->addWidget(handPlayer3);

        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(200, 470, 101, 131));
        buttons = new QVBoxLayout(verticalLayoutWidget);
        buttons->setSpacing(6);
        buttons->setContentsMargins(11, 11, 11, 11);
        buttons->setObjectName(QStringLiteral("buttons"));
        buttons->setContentsMargins(0, 0, 0, 0);
        pushButton_drawMore = new QPushButton(verticalLayoutWidget);
        pushButton_drawMore->setObjectName(QStringLiteral("pushButton_drawMore"));

        buttons->addWidget(pushButton_drawMore);

        pushButton_enough = new QPushButton(verticalLayoutWidget);
        pushButton_enough->setObjectName(QStringLiteral("pushButton_enough"));

        buttons->addWidget(pushButton_enough);

        pushButton_surrender = new QPushButton(verticalLayoutWidget);
        pushButton_surrender->setObjectName(QStringLiteral("pushButton_surrender"));

        buttons->addWidget(pushButton_surrender);

        pushButton_double = new QPushButton(verticalLayoutWidget);
        pushButton_double->setObjectName(QStringLiteral("pushButton_double"));

        buttons->addWidget(pushButton_double);

        pushButton_split = new QPushButton(verticalLayoutWidget);
        pushButton_split->setObjectName(QStringLiteral("pushButton_split"));

        buttons->addWidget(pushButton_split);

        horizontalLayoutWidget_2 = new QWidget(centralWidget);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(310, 10, 422, 191));
        hand_diller = new QHBoxLayout(horizontalLayoutWidget_2);
        hand_diller->setSpacing(6);
        hand_diller->setContentsMargins(11, 11, 11, 11);
        hand_diller->setObjectName(QStringLiteral("hand_diller"));
        hand_diller->setContentsMargins(0, 0, 0, 0);
        handDealer1 = new QLabel(horizontalLayoutWidget_2);
        handDealer1->setObjectName(QStringLiteral("handDealer1"));
        handDealer1->setMinimumSize(QSize(136, 189));
        handDealer1->setMaximumSize(QSize(136, 189));
        handDealer1->setStyleSheet(QLatin1String("border-style: solid;\n"
"border-width: 1px;\n"
"border-color: black;"));

        hand_diller->addWidget(handDealer1);

        handDealer2 = new QLabel(horizontalLayoutWidget_2);
        handDealer2->setObjectName(QStringLiteral("handDealer2"));
        handDealer2->setMinimumSize(QSize(136, 189));
        handDealer2->setMaximumSize(QSize(136, 189));
        handDealer2->setStyleSheet(QLatin1String("border-style: solid;\n"
"border-width: 1px;\n"
"border-color: black;"));

        hand_diller->addWidget(handDealer2);

        handDealer3 = new QLabel(horizontalLayoutWidget_2);
        handDealer3->setObjectName(QStringLiteral("handDealer3"));
        handDealer3->setMinimumSize(QSize(136, 189));
        handDealer3->setMaximumSize(QSize(136, 189));
        handDealer3->setStyleSheet(QLatin1String("border-style: solid;\n"
"border-width: 1px;\n"
"border-color: black;"));

        hand_diller->addWidget(handDealer3);

        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(310, 329, 421, 81));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        CardValuePlayerTotal = new QLabel(gridLayoutWidget);
        CardValuePlayerTotal->setObjectName(QStringLiteral("CardValuePlayerTotal"));
        CardValuePlayerTotal->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(CardValuePlayerTotal, 0, 1, 1, 1);

        CardValuePlayer2 = new QLabel(gridLayoutWidget);
        CardValuePlayer2->setObjectName(QStringLiteral("CardValuePlayer2"));
        CardValuePlayer2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(CardValuePlayer2, 1, 1, 1, 1);

        CardValuePlayer3 = new QLabel(gridLayoutWidget);
        CardValuePlayer3->setObjectName(QStringLiteral("CardValuePlayer3"));
        CardValuePlayer3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(CardValuePlayer3, 1, 2, 1, 1);

        CardValuePlayer1 = new QLabel(gridLayoutWidget);
        CardValuePlayer1->setObjectName(QStringLiteral("CardValuePlayer1"));
        CardValuePlayer1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(CardValuePlayer1, 1, 0, 1, 1);

        gridLayoutWidget_2 = new QWidget(centralWidget);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(310, 210, 421, 80));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        CardValueDealer1 = new QLabel(gridLayoutWidget_2);
        CardValueDealer1->setObjectName(QStringLiteral("CardValueDealer1"));
        CardValueDealer1->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(CardValueDealer1, 0, 0, 1, 1);

        CardValueDealer3 = new QLabel(gridLayoutWidget_2);
        CardValueDealer3->setObjectName(QStringLiteral("CardValueDealer3"));
        CardValueDealer3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(CardValueDealer3, 0, 2, 1, 1);

        CardValueDealer2 = new QLabel(gridLayoutWidget_2);
        CardValueDealer2->setObjectName(QStringLiteral("CardValueDealer2"));
        CardValueDealer2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(CardValueDealer2, 0, 1, 1, 1);

        CardValueDealerTotal = new QLabel(gridLayoutWidget_2);
        CardValueDealerTotal->setObjectName(QStringLiteral("CardValueDealerTotal"));
        CardValueDealerTotal->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(CardValueDealerTotal, 1, 1, 1, 1);

        output = new QTextBrowser(centralWidget);
        output->setObjectName(QStringLiteral("output"));
        output->setGeometry(QRect(30, 250, 256, 101));
        gridLayoutWidget_3 = new QWidget(centralWidget);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(30, 360, 251, 81));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_newgame = new QPushButton(gridLayoutWidget_3);
        pushButton_newgame->setObjectName(QStringLiteral("pushButton_newgame"));

        gridLayout_3->addWidget(pushButton_newgame, 1, 0, 1, 2);

        spinBox = new QSpinBox(gridLayoutWidget_3);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        gridLayout_3->addWidget(spinBox, 2, 1, 1, 1);

        label = new QLabel(gridLayoutWidget_3);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_3->addWidget(label, 2, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 3, 0, 1, 1);

        cash = new QLabel(gridLayoutWidget_3);
        cash->setObjectName(QStringLiteral("cash"));

        gridLayout_3->addWidget(cash, 3, 1, 1, 1);

        verticalLayoutWidget_2 = new QWidget(centralWidget);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(820, 580, 101, 69));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        splitLeftValue = new QLabel(verticalLayoutWidget_2);
        splitLeftValue->setObjectName(QStringLiteral("splitLeftValue"));
        splitLeftValue->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(splitLeftValue);

        pushButton_SplitDrawLeft = new QPushButton(verticalLayoutWidget_2);
        pushButton_SplitDrawLeft->setObjectName(QStringLiteral("pushButton_SplitDrawLeft"));

        verticalLayout->addWidget(pushButton_SplitDrawLeft);

        pushButton_SplitEnoughLeft = new QPushButton(verticalLayoutWidget_2);
        pushButton_SplitEnoughLeft->setObjectName(QStringLiteral("pushButton_SplitEnoughLeft"));

        verticalLayout->addWidget(pushButton_SplitEnoughLeft);

        verticalLayoutWidget_3 = new QWidget(centralWidget);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(980, 580, 101, 69));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        splitRightValue = new QLabel(verticalLayoutWidget_3);
        splitRightValue->setObjectName(QStringLiteral("splitRightValue"));
        splitRightValue->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(splitRightValue);

        pushButton_SplitDrawRight = new QPushButton(verticalLayoutWidget_3);
        pushButton_SplitDrawRight->setObjectName(QStringLiteral("pushButton_SplitDrawRight"));

        verticalLayout_2->addWidget(pushButton_SplitDrawRight);

        pushButton_SplitEnoughRight = new QPushButton(verticalLayoutWidget_3);
        pushButton_SplitEnoughRight->setObjectName(QStringLiteral("pushButton_SplitEnoughRight"));

        verticalLayout_2->addWidget(pushButton_SplitEnoughRight);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1119, 20));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        handPlayer1->setText(QString());
        handPlayer2->setText(QString());
        handPlayer3->setText(QString());
        pushButton_drawMore->setText(QApplication::translate("MainWindow", "\320\222\320\267\321\217\321\202\321\214 \320\265\321\211\320\265", nullptr));
        pushButton_enough->setText(QApplication::translate("MainWindow", "\320\236\321\201\321\202\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_surrender->setText(QApplication::translate("MainWindow", "\320\241\320\264\320\260\321\202\321\214\321\201\321\217", nullptr));
        pushButton_double->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\262\320\276\320\270\321\202\321\214", nullptr));
        pushButton_split->setText(QApplication::translate("MainWindow", "\320\240\320\260\320\267\320\264\320\265\320\273\320\270\321\202\321\214", nullptr));
        handDealer1->setText(QString());
        handDealer2->setText(QString());
        handDealer3->setText(QString());
        CardValuePlayerTotal->setText(QString());
        CardValuePlayer2->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        CardValuePlayer3->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        CardValuePlayer1->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        CardValueDealer1->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        CardValueDealer3->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        CardValueDealer2->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        CardValueDealerTotal->setText(QString());
        pushButton_newgame->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\262\320\260\321\217 \320\270\320\263\321\200\320\260", nullptr));
        label->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\260\320\262\320\272\320\260", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\320\221\320\260\320\273\320\260\320\275\321\201", nullptr));
        cash->setText(QString());
        splitLeftValue->setText(QString());
        pushButton_SplitDrawLeft->setText(QApplication::translate("MainWindow", "\320\222\320\267\321\217\321\202\321\214 \320\265\321\211\320\265", nullptr));
        pushButton_SplitEnoughLeft->setText(QApplication::translate("MainWindow", "\320\236\321\201\321\202\320\260\320\262\320\270\321\202\321\214", nullptr));
        splitRightValue->setText(QString());
        pushButton_SplitDrawRight->setText(QApplication::translate("MainWindow", "\320\222\320\267\321\217\321\202\321\214 \320\265\321\211\320\265", nullptr));
        pushButton_SplitEnoughRight->setText(QApplication::translate("MainWindow", "\320\236\321\201\321\202\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
