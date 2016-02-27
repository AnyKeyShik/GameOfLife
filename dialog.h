#ifndef DIALOG_H
#define DIALOG_H

#include <QMainWindow>
#include <QColor>
#include "gamewidget.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void selectMasterColor();

    void saveGame();
    void loadGame();

private:
    Ui::MainWindow *ui;
    QColor currentColor;
    GameWidget* game;
};

#endif // DIALOG_H
