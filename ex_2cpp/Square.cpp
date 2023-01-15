/*  Assignment C++: 3
    Author: Amichai Malle,  ID: 308476977
            Eliav Cohen,    ID: 318191913
*/

#include "Square.h"

Square::Square(double side, char *color) : Shape(color) {
    if (side <= 0) { throw "Exception: The side must be positive";}
    this->side = side;
}
Square::Square(char *color, double side) : Shape(color) {
    if (side <= 0) { throw "Exception: The side must be positive";}
    this->side = side;
}

double Square::getArea() const {
    return side * side;
}

double Square::getPerimeter() const {
    return 4 * side;
}

void Square::draw() const {
    int sideInt = int(side);
    for (int i = 0; i < sideInt; i++) {
        for (int j = 0; j < sideInt; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

//bool Square::operator==(const Shape& other) const{
//    if (Shape::operator==(other) == 0){
//        const Square* otherSquare = dynamic_cast<const Square*>(&other);
//        if (otherSquare == nullptr) { return false; }
//        return side == otherSquare->side;
//    }
//    return false;
//}

ostream& operator<<(ostream& os, const Square& shape){
    shape.toOs(os);
    return os;
}

void Square::toOs(ostream& os) const {
    os << "Square details: color=" << color << ", side length=" << side << endl;
    os << "area=" << getArea() << " perimeter=" << getPerimeter() << endl;
}