/*  Assignment C++: 3
    Author: Amichai Malle,  ID: 308476977
            Eliav Cohen,    ID: 318191913
*/

#include "OrthogonalTriangle.h"

#define NEGATIVE_SIDE "Exception: The side must be positive"

OrthogonalTriangle::OrthogonalTriangle(double side, char *color) noexcept(false) : Shape(color) {   // constructor
    if (side <= 0) { throw NEGATIVE_SIDE;}
    this->side = side;
}
OrthogonalTriangle::OrthogonalTriangle(char *color, double side) noexcept(false) : Shape(color) {   // constructor
    if (side <= 0) { throw NEGATIVE_SIDE;}
    this->side = side;
}

double OrthogonalTriangle::getArea() const {        // calculate the area of the triangle
    return (side * side) / 2;
}

double OrthogonalTriangle::getPerimeter() const {   // calculate the perimeter of the triangle
    return 2 * side + sqrt(2) * side;
}

void OrthogonalTriangle::draw() const {            // draw the triangle - use by menu with RTTI mechanism
    int sideInt = int(side);
    for (int i = 0; i < sideInt; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

ostream& operator<<(ostream& os, const OrthogonalTriangle& shape){  // print the triangle details
    shape.toOs(os);
    return os;
}

void OrthogonalTriangle::toOs(ostream& os) const {  // print the triangle details - use for operator<< shape type
    os << "Square details: color=" << color << ", side=" << side << endl;
    os << "area=" << getArea() << " perimeter=" << getPerimeter() << endl;
}