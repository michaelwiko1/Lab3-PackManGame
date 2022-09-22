#ifndef H_PLAYER
#define H_PLAYER

#include <iostream>

/*
 * PlayerState enum stores the state of player
 */
enum PlayerState {
    ALIVE, DEAD
};

#include "BoardObject.h"

class Player : public BoardObject {

/*
 * PlayerState enum stores the state of player
 */
private:
    PlayerState status; //A variable to get the player's status
    ObjectColours color1; // Variable color1 for object
    ObjectColours color2; // Variable color2 for object

/*
 * Constructor
 * The function initialize the status and colors of the player
 */    
public:
    Player(int start_x, int start_y) : BoardObject(start_x, start_y) {
        status = ALIVE;
        color1 = RED;
        color2 = BLUE;
        myClass = A_PLAYER;
    };
/*
 * touch function give state to Player
 */
    virtual void touch();
};

#endif
