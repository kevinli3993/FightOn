#include "mainwindow.h"
#include <cstdlib>

void MainWindow::handleTimer()
{
    for(unsigned int i = 0; i < items.size(); i++)
    {
    	items[i]->move( WINDOW_MAX_X, WINDOW_MAX_Y );
    }
    counter++;
    if(counter%50 == 0) createNewRectangle();
}

void MainWindow::createNewRectangle()
{
	int randomnumber1 = rand()%251;
	int randomnumber2 = rand()%251;
	int randvelocityX = rand()%6;
	int randvelocityY = rand()%6;
	int choice = rand()%5;
	BouncingRectangle* newRectangle = new BouncingRectangle(randomnumber1,randomnumber2,20,20,randvelocityX,randvelocityY);
	switch(choice)
	{
		case 0:
		{
			QBrush brushRed(Qt::red);
			newRectangle->setBrush(brushRed);
			break;
		}
		case 1:
		{
			QBrush brushBlue(Qt::blue);
			newRectangle->setBrush(brushBlue);
			break;
		}
		case 2:
		{
			QBrush brushGreen(Qt::green);
			newRectangle->setBrush(brushGreen);
			break;
		}
		case 3:
		{
			QBrush brushBlack(Qt::black);
			newRectangle->setBrush(brushBlack);
			break;
		}
		case 4:
		{
			QBrush brushYellow(Qt::yellow);
			newRectangle->setBrush(brushYellow);
			break;
		}
		default:
			break;
	}
	scene->addItem(newRectangle);
	items.push_back( newRectangle);
}

void MainWindow::handleStop()
{
	if(timer->isActive())
	{
		timer->stop();
	}
	else
	{
		timer->start();
	}
}

MainWindow::MainWindow()  {
    //We need a scene and a view to do graphics in QT
    scene = new QGraphicsScene();
    view = new QGraphicsView( scene );

    //To fill a rectangle use a QBrush. To draw the border of a shape, use a QPen
    QBrush redBrush(Qt::red);

    //First 2 arguments are the x, y, of the upper left of the rectangle.
    //The second 2 arguments are the width and height
    //The last 2 arguments are the velocity in the x, and y, directions
    BouncingRectangle* newItem = new BouncingRectangle( 11.0, 74.0, 20.0, 20.0, 2, 3 );
    newItem->setBrush( redBrush );
    items.push_back(newItem);
    scene->addItem( newItem );


    //This sets the size of the window and gives it a title.
    view->setFixedSize( WINDOW_MAX_X*2, WINDOW_MAX_Y*2 );
    view->setWindowTitle("Bouncing Rectangles");

    //This is how we do animation. We use a timer with an interval of 5 milliseconds
    //We connect the signal from the timer - the timeout() function to a function
    //of our own - called handleTimer - which is in this same MainWindow class
    timer = new QTimer(this);
    timer->setInterval(5);
    connect(timer, SIGNAL(timeout()), this, SLOT(handleTimer()));
    
    buttonStart = new QPushButton("Start/Stop");
    scene->addWidget(buttonStart);
    connect(buttonStart, SIGNAL(clicked()), this, SLOT(handleStop()));
	counter = 0;
}

void MainWindow::show() {
    //This is only called once by main. Timers don't start working until
    //we call start
    timer->start();

    //This is how we get our view displayed.
    view->show();
}

MainWindow::~MainWindow()
{
    timer->stop();
    delete timer;
    delete scene;
    delete view;
}


