/*  Assignment C++: 3
    Author: Amichai Malle,  ID: 308476977
            Eliav Cohen,    ID: 318191913
*/

#include "Circle.h"
#include "Square.h"
#include "OrthogonalTriangle.h"
#include "LinkedList.h"
#include <string>
#include <iostream>
using namespace std;

#ifndef _Menu_H
#define _Menu_H

class Menu {
    public:
        Menu();
        void mainMenu();
        ~Menu(){};
    private:
        int choice;
        //Shape *shape;
        char *getColor();

        static void printMainMenu();
        void printLastShape(const Shape& shape) const;
        void cleanBuffer();
        Shape *chooseShape();
        Shape *getShape(char *shapeName, char *shapeFeature);
        Shape *getSquare();
        Shape *getOrthogonalTriangle();
        Shape *getCircle();



};


#endif
