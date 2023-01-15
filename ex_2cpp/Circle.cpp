/*  Assignment C++: 3
    Author: Amichai Malle,  ID: 308476977
            Eliav Cohen,    ID: 318191913
*/

#include "Circle.h"

Circle::Circle(double radius, char *color) noexcept(false) : Shape(color) {     // Constructor
    if (radius <= 0) {throw "Radius must be positive";}
    this->radius = radius;
}

Circle::Circle(char *color, double radius) noexcept(false) : Shape(color) {     // constructor
    if (radius <= 0) {throw "Radius must be positive";}
    this->radius = radius;
}

double Circle::getArea() const {        // calculate the area of the circle
    return 3.14 * radius * radius;
}

double Circle::getPerimeter() const {   // calculate the perimeter of the circle
    return 2 * 3.14 * radius;
}

ostream& operator<<(ostream& os, const Circle& shape){  // print the circle details
    shape.toOs(os);
    return os;
}

void Circle::toOs(ostream& os) const {                  // print the circle details - use for operator<< shape type
    os << "Square details: color=" << color << ", radius=" << radius << endl;
    os << "area=" << getArea() << " perimeter=" << getPerimeter() << endl;
}