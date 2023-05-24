/********************************************************************************
** Form generated from reading UI file 'GameOfLife.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEOFLIFE_H
#define UI_GAMEOFLIFE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameOfLifeClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *GameOfLifeClass)
    {
        if (GameOfLifeClass->objectName().isEmpty())
            GameOfLifeClass->setObjectName(QStringLiteral("GameOfLifeClass"));
        GameOfLifeClass->resize(600, 400);
        menuBar = new QMenuBar(GameOfLifeClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        GameOfLifeClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(GameOfLifeClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        GameOfLifeClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(GameOfLifeClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        GameOfLifeClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(GameOfLifeClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        GameOfLifeClass->setStatusBar(statusBar);

        retranslateUi(GameOfLifeClass);

        QMetaObject::connectSlotsByName(GameOfLifeClass);
    } // setupUi

    void retranslateUi(QMainWindow *GameOfLifeClass)
    {
        GameOfLifeClass->setWindowTitle(QApplication::translate("GameOfLifeClass", "GameOfLife", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GameOfLifeClass: public Ui_GameOfLifeClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEOFLIFE_H
