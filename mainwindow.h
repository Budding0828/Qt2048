#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include "gamelogic.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    gamelogic game;
    int totscore;
    explicit MainWindow(QWidget *parent = 0);
    void showbroad();
    void keyPressEvent(QKeyEvent *event);
    void changeColor(QLabel* label, int num);
    ~MainWindow();

private slots:

    void on_restartButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
