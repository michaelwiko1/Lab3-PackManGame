/*
 * WalState enum stores the state of the wall (SOLID)
 */
enum WalState {
    SOLID
};

#include "BoardObject.h"

class Wall : public BoardObject {

private:
    ObjectColours color1; // variable that controll
/*
 * Constructor
 * Initialize the color of the Wall and wall class
 */
public:
    Wall(int start_x, int start_y) : BoardObject(start_x, start_y) {
        color1 = BLACK; 
        myClass = A_WALL;
    };
/*
 * touch function give state to player (The wall is SOLID)
 */
    void touch();
};
