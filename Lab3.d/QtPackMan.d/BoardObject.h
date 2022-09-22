#ifndef H_BOARD_OBJECT
#define H_BOARD_OBJECT
/*
* ObjectColours enum stores colours 
* ObjectTypes enum stores the types
**/
enum ObjectColours {
    BLACK, YELLOW, BLUE, RED, INVISIBLE, BACKGROUND
};
enum ObjectTypes {
    THE_BACKGROUND, A_COOKIE, A_PLAYER, A_WALL
};


class BoardObject {

private:
    int x, y; /**< x and y value */
    ObjectColours currentColor;  /**< a variable control the current color */
protected:
    ObjectTypes myClass; /**< a variable stores the type */
    //int unique_ID;
    //static int count;
public:
    /*
    * The constructor
    * The function initialize the type and color and coordination.
    * @param start_x the starting point of x coordination
    * @param start_y the starting point of y coordination
    **/
    BoardObject(int start_x, int start_y) {
        x = start_x;
        y = start_y;
        currentColor = BACKGROUND;
        myClass = THE_BACKGROUND;
        //unique_ID=count++;
    };

    //int get_ID() { return unique_ID;};
    /*
    * @return The x value
    **/
    int get_x() {
        return x;
    };
    /*
    * @return The y value
    **/
    int get_y() {
        return y;
    };
    /*
    * @return The current type
    **/
    ObjectTypes get_Type() {
        return myClass;
    }
    /*
    * @return The current colour
    **/
    ObjectColours get_Color() { return currentColor; }

    /*
    * The virtual function 
    * Reset the color
    **/
    virtual void touch() { currentColor = BACKGROUND; }

protected:
    /*
    * @param new_color the new color
    * Reset the color
    **/
    void set_color(ObjectColours new_color) { currentColor = new_color; };
    /*
    * @param new_x the new x
    * Reset the x
    **/
    void set_x(int new_x) { x = new_x; };
    /*
    * @param new_y the new y
    * Reset the y
    **/
    void set_y(int new_y) { y = new_y; };


};

//int BoardObject::count=0;
#endif // H_BOARD_OBJECT

