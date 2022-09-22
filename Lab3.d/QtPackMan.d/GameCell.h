#ifndef GAME_CELL_H
#define GAME_CELL_H

#include <qwidget.h>

/*
 * a function for showing Qt GUI for the game
 */
class GameCell : public QWidget {
    Q_OBJECT
private:
    QColor currentColor;

public:
    /*
     * a Constructor
     * @return the pointer
     */
    GameCell(QWidget *parent = 0);

    //QColor currentColor() const { return currentColor; }

public
    slots:
        /*
         * a function to set colors from GUI
         * @return QColoraColor
         */
        void setColor(QColoraColor);

protected:
        /*
         * a function to give colors from GUI
         * @return the pointer
         */
        void paintEvent(QPaintEvent *event);

};

#endif

