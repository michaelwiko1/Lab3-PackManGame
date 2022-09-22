#ifndef H_COOKIE
#define H_COOKIE
enum CookieState { VISIBLE, EATEN, EXPIRED}; //enum store the state

enum PrizeValueIndex {CHEAP, MEDIUM, USEFUL, DEAR}; //enum store the prize value


#include "BoardObject.h"

class Cookie : public BoardObject
{

private:
	CookieState status; 
	ObjectColours color1;
	ObjectColours  color2;
	PrizeValueIndex valueIndex; // relating to the enum

public:
	/**
	* Constructor
	* The function initialize the colors and state and make the class as cookie.
	* @param start_x starting point of x
	* @param start_y starting point of y
	*/
	Cookie (int start_x, int start_y):BoardObject(start_x,start_y)
		{ status=VISIBLE;
		  color1 = YELLOW;
		  color2  = BLUE;
		  valueIndex=CHEAP;
                  myClass=A_COOKIE;
		};
	/**
	*
	*/
	int get_value(); 

	void touch ();
};
#endif
