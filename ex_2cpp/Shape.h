/*  Assignment C++: 3
    Author: Amichai Malle,  ID: 308476977
            Eliav Cohen,    ID: 318191913
*/

#include <string>
#include <iostream>
using namespace std;

#ifndef _Shape_H
#define _Shape_H

class Shape {
    protected:
        char *color;
    public:
        Shape() { color = nullptr; }        // default constructor
        Shape(char *color) noexcept(false); // constructor
        virtual double getPerimeter() const = 0;    // pure virtual function
        virtual double getArea() const = 0;         // pure virtual function
        virtual void toOs(ostream& os) const = 0;   // pure virtual function
        friend ostream& operator<<(ostream& os, const Shape& shape);    // friend function for << operator
        virtual ~Shape() = 0;                     // pure virtual destructor
};

#endif
