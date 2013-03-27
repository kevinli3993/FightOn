#include <QtGui/QApplication>
#include "mainwindow.h"
#include <QPushButton>
#include <QHBoxLayout>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
//    QPushButton* button = new QPushButton("Start/Stop");

//	QHBoxLayout* layout = new QHBoxLayout;
//	layout->addWidget(button);
//	w.addWidget(button);
    w.show();
    return a.exec();
}

