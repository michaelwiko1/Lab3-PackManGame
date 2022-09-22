#ifndef MODEL_H
#define MODEL_H

#define ROWS 20
#define COLUMNS 20

#include <vector>
#include  "BoardObject.h"
#include  "ListBoardObjects.h"
#include  "Player.h"
#include  "Wall.h"
#include  "Cookie.h"
#include  <QWidget>

class Controller;

typedef ListBoardObjects *p_ListBoardObjects;

class Model : public QWidget {

    Q_OBJECT

private:

    int the_rows, the_cols; // to map the game with rows and columns

    bool setOK; // a boolean variable to prepare the game
    bool gameOn; // a boolean variable to start a game
    int lives; // a variable for player's life in interger
    p_ListBoardObjects mySpace[ROWS][COLUMNS]; //a variable called mySpace to create ROWS and COLUMNS
    int player_id_x; // player position x-axis
    int player_id_y; // player position y-axis
    Player *startPlayer; // a pointer to Player for start
    int currentScore;// show value of the current score
    Controller *myController; // a pointer to Controller


public:
    
    /*
     * Constructor
     * @param rows is to set the mapping of the game (x-axis)
     * @param columns is to set the mapping of the game (y-axis)
     */

    Model(int rows, int cols) {

        if ((ROWS >= rows) && (COLUMNS >= cols)) {
            setOK = false;
            the_rows = rows;
            the_cols = cols;
            lives = 3000000;
            gameOn = true;
            for (int i = 0; i < rows; i++)
                for (int j = 0; j < cols; j++) {
                    BoardObject *aBackground = new BoardObject(i, j);
                    p_ListBoardObjects aList = new ListBoardObjects(aBackground);
                    mySpace[i][j] = aList;
                }
            player_id_x = the_rows / 2;
            player_id_y = the_cols / 2;
            startPlayer = new Player(player_id_x, player_id_y);
            currentScore = 0;

            (mySpace[player_id_x][player_id_y])->addOne(startPlayer);

            for (int i = 1; i < the_rows - 1; i++) {
                Wall *aWall = new Wall(i, 1);
                (mySpace[i][1])->addOne(aWall);
                aWall = new Wall(i, the_cols - 2);
                (mySpace[i][the_cols - 2])->addOne(aWall);
            }

            for (int i = 1; i < the_rows - 1; i = i + 2) {
                Cookie *aCookie = new Cookie(i, 0);
                (mySpace[i][0])->addOne(aCookie);
                aCookie = new Cookie(i, the_cols - 1);
                (mySpace[i][the_cols - 1])->addOne(aCookie);
            }
            setOK = true;
        } else
            setOK = false;

    };


    /*
    ~Model()
    {
        delete myController;

        delete startPlayer;
    };*/

    /*
     * @return setOK value
     */
    bool setModelOK() { return setOK; };

    /*
     * @return lives value (boolean)
     */
    bool IamAlive() {
        if (0 < lives) {
            lives--;
            return true;
        } else return false;
    }

public
    slots:
        /*
         * function to player based on command
         */
        void move(char command);
        /*
         * function to color the game
         */
        void paint();

    signals:
       /*
	    * The function can change color
	    * @param i is the coordination x of the target cell
	    * @param j is the coordination y of the target cell
	    * @param draw is the variable for character
	    */
        void cellChanged(int i, int j, char draw);
};

#endif
