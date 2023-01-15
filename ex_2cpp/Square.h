/*  Assignment C++: 3
    Author: Amichai Malle,  ID: 308476977
            Eliav Cohen,    ID: 318191913
*/

#include "Shape.h"
#include <iostream>
using namespace std;

#ifndef _Square_H
#define _Square_H

class Square : public Shape {
    private:
        double side;
        //void draw() const;    // better to by private but needed for menu
    public:
        Square() : Shape() { side = 0; }        // default constructor
        Square(double side, char *color) noexcept(false);   // constructor
        Square(char *color, double side) noexcept(false);   // constructor
        virtual double getArea() const;
        virtual double getPerimeter() const;
        virtual void toOs(ostream& os) const;
        friend ostream& operator<<(ostream& os, const Square& shape);
        void draw() const;
        ~Square(){};    // default destructor
};


#endif
