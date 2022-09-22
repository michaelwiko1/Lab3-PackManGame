/*	
 *
 *
 */
#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QWidget>
#include <QTimer>
#include <QPushButton>

#include "Model.h"
#include "BoardCells.h"


#include "Common.h"

class QPushButton;

class QTimer;

class Controller : public QWidget {
    Q_OBJECT

            QPushButton
    *
    startButton;        // Starts
    QPushButton *upButton;        // up button
    QPushButton *downButton;        // down button
    QPushButton *leftButton;        // left button
    QPushButton *rightButton;        // rigght button


    QTimer *gameTimer;        // the pointer to the timer

    bool gameRunning;        // bool value to control the game is running
    bool setupComplete;        // bool value to control if the gama is ready

    Model *myModel;         // the pointer to the model
    BoardCells *myBoard;    // the pointer to the Boardcell

public:
    /**
       * A constructor.
       * @param the pointer
       */
    Controller(QWidget *parent = 0);

    ~Controller(); // deconstructor function


private
    slots:
            void startGame();

    void update(); 

    void sendUp();

    void sendDown();

    void sendLeft();

    void sendRight();
    /**
       * The function change the color
       * @param i is x coordination
       * @param j is y coordination 
       * @param c is color controller 
       */
    void forwardChangeColor(int i, int j, char c);

};

#endif

