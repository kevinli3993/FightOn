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
<<<<<<< HEAD
#include <vector>
=======
>>>>>>> 3f0cda95c46e3c0380612622bf7e8c9efa63e7f1

#include "bouncingrectangle.h"

#define WINDOW_MAX_X 250
#define WINDOW_MAX_Y 250

class MainWindow : public QWidget {
    Q_OBJECT
    
public:
    explicit MainWindow();
    ~MainWindow();
<<<<<<< HEAD
    void createNewRectangle();
=======

>>>>>>> 3f0cda95c46e3c0380612622bf7e8c9efa63e7f1
    void show();
    
private:
    QGraphicsScene *scene;
    QGraphicsView *view;
    QTimer *timer;
<<<<<<< HEAD
    QPushButton *buttonStart;
    QPushButton *buttonStop;
    std::vector<BouncingRectangle*> items;
    int counter;

public slots:
    void handleTimer();
    void handleStop();
=======
    BouncingRectangle *item;

public slots:
    void handleTimer();
>>>>>>> 3f0cda95c46e3c0380612622bf7e8c9efa63e7f1

};

#endif // MAINWINDOW_H
<<<<<<< HEAD

=======
>>>>>>> 3f0cda95c46e3c0380612622bf7e8c9efa63e7f1
