#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsRectItem>
#include <QTimer>
#include <QTimeLine>
#include <QGraphicsItemAnimation>
#include <QPushButton>
#include <vector>

#include "bouncingrectangle.h"

#define WINDOW_MAX_X 250
#define WINDOW_MAX_Y 250

class MainWindow : public QWidget {
    Q_OBJECT
    
public:
    explicit MainWindow();
    ~MainWindow();
    void createNewRectangle();
    void show();
    
private:
    QGraphicsScene *scene;
    QGraphicsView *view;
    QTimer *timer;
    QPushButton *buttonStart;
    QPushButton *buttonStop;
    std::vector<BouncingRectangle*> items;
    int counter;

public slots:
    void handleTimer();
    void handleStop();

};

#endif // MAINWINDOW_H

