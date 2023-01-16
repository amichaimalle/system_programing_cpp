/*  Assignment C++: 3
    Author: Amichai Malle,  ID: 308476977
            Eliav Cohen,    ID: 318191913
*/

#include "Square.h"

#define NEGATIVE_SIDE "Exception: The side must be positive"

Square::Square(double side, char *color) noexcept(false) : Shape(color) {  // constructor
    if (side <= 0) { throw NEGATIVE_SIDE;}
    this->side = side;
}
Square::Square(char *color, double side) noexcept(false) : Shape(color) {  // constructor
    if (side <= 0) { throw NEGATIVE_SIDE;}
    this->side = side;
}

double Square::getArea() const {    // calculate the area of the square
    return side * side;
}

double Square::getPerimeter() const {   // calculate the perimeter of the square
    return 4 * side;
}

void Square::draw() const {        // draw the square - use by menu with RTTI mechanism
    int sideInt = int(side);
    for (int i = 0; i < sideInt; i++) {
        for (int j = 0; j < sideInt; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

ostream& operator<<(ostream& os, const Square& shape){  // print the square details
    shape.toOs(os);
    return os;
}

void Square::toOs(ostream& os) const {  // print the square details - use for operator<< shape type
    os << "Square details: color=" << color << ", side length=" << side << endl;
    os << "area=" << getArea() << " perimeter=" << getPerimeter() << endl;
}