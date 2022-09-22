#ifndef BOARD_CELL_H
#define BOARD_CELL_H

#include "GameCell.h"
#include "Common.h"
#include <QGridLayout>
/*
* The class store the pointer of gamecells
**/
class BoardCells : public QGridLayout
{

private:
	GameCell *theCells[SIZE_X][SIZE_Y];

 public:
 	/*
	* The constructor
	**/
     BoardCells();
	/*
	* The function can change color
	* @param i is the coordination x of the target cell
	* @param j is the coordination y of the target cell
	* @param c is the color
	**/
     void forwardChangeColor(int i, int j, char c);

};

#endif

