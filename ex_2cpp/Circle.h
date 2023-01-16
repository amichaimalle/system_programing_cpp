/*  Assignment C++: 3
    Author: Amichai Malle,  ID: 308476977
            Eliav Cohen,    ID: 318191913
*/

#include "Shape.h"
#include <iostream>
using namespace std;

#ifndef _Circle_H
#define _Circle_H

class Circle : public Shape {
private:
    double radius;
public:
    Circle() : Shape() {radius = 0;}        // default constructor
    Circle(double radius, char *color) noexcept(false);   // constructor
    Circle(char *color, double radius) noexcept(false);  // constructor
    virtual double getArea() const override;        // calculate the area of the circle
    virtual double getPerimeter() const override;   // calculate the perimeter of the circle
    friend ostream& operator<<(ostream& os, const Circle& shape);
    virtual void toOs(ostream& os) const override;  // print the circle details - use for operator<< shape type
    ~Circle(){};                        // default destructor
};

#endif
