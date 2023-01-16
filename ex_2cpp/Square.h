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
    public:
        Square() : Shape() { side = 0; }        // default constructor
        Square(double side, char *color) noexcept(false);   // constructor
        Square(char *color, double side) noexcept(false);   // constructor
        virtual double getArea() const override;        // calculate the area of the square
        virtual double getPerimeter() const override;   // calculate the perimeter of the square
        virtual void toOs(ostream& os) const override;  // print the square details - use for operator<< shape type
        friend ostream& operator<<(ostream& os, const Square& shape);
        void draw() const;
        ~Square(){};    // default destructor
};


#endif
