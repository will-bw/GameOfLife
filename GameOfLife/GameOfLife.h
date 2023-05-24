#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_GameOfLife.h"

class GameOfLife : public QMainWindow
{
    Q_OBJECT

public:
    GameOfLife(QWidget *parent = nullptr);
    ~GameOfLife();

private:
    Ui::GameOfLifeClass ui;
};
