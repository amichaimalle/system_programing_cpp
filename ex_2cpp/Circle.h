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
    Circle() : Shape() {radius = 0;}
    Circle(double radius, char *color) noexcept(false);
    Circle(char *color, double radius) noexcept(false);
    virtual double getArea() const override;
    virtual double getPerimeter() const override;
    friend ostream& operator<<(ostream& os, const Circle& shape);
    //virtual bool operator==(const Shape& other) const;
    virtual void toOs(ostream& os) const override;
    ~Circle(){};
};

#endif
