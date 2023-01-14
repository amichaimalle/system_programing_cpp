/*  Assignment C++: 3
    Author: Amichai Malle,  ID: 308476977
            Eliav Cohen,    ID: 318191913
*/

#ifndef _Circle_H
#define _Circle_H

#include "Shape.h"
#include <iostream>
using namespace std;

class Circle : public Shape {
private:
    double radius;
public:
    Circle() : Shape() {radius = 0;}
    Circle(double radius, char *color) noexcept(false);
    Circle(char *color, double radius) noexcept(false);
    virtual double getArea() const override;
    virtual double getPerimeter() const override;
    virtual bool operator==(const Shape& other) const;
    virtual void toOs(ostream& os) const override;
    ~Circle(){};
};

#endif
