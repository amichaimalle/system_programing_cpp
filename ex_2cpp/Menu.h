/*  Assignment C++: 3
    Author: Amichai Malle,  ID: 308476977
            Eliav Cohen,    ID: 318191913
*/

#ifndef _Menu_H
#define _Menu_H

//#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include "OrthogonalTriangle.h"
#include "LinkedList.h"
#include <string>
#include <iostream>
using namespace std;

class Menu {
    public:
        Menu();
        void mainMenu();
        ~Menu(){};
    private:
        int choice;
        //Shape *shape;
        char *getColor();

        static void printMainMenu() ;
        void cleanBuffer();
        Shape *getShape();
        Shape *getSquare();
        Shape *getOrthogonalTriangle();
        Shape *getCircle();



};


#endif
