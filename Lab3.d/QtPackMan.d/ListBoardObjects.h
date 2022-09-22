#include <vector>
#include  "BoardObject.h"
#include  "Player.h"
#include  "Cookie.h"

#ifndef H_LIST_OF_OBJECTS
#define H_LIST_OF_OBJECTS
typedef BoardObject *p_BoardObject;

/*
 * A class that store objects for the game
 */
class ListBoardObjects {
    std::vector <p_BoardObject> list;
    std::vector<p_BoardObject>::iterator internalIterator;
    
public:
    /*
     * a function for storing objects of the game
     * @return theFirst value
     */
    ListBoardObjects(p_BoardObject theFirst);

    p_BoardObject theFirst(); // method for storing first game memory

    p_BoardObject theNext(); // method for storing next game memory

    /*
     * a method for adding objects in the game
     * @return newOne value
     */
    void addOne(p_BoardObject newOne); 

    void removeOnePlayer(); //method for removing the player

    bool isThereAWall(); // method for checking if there's a wall

    int isCookieValue(); // method for retrieving cookie value or status
};

#endif
