/*  Assignment C++: 3
    Author: Amichai Malle,  ID: 308476977
            Eliav Cohen,    ID: 318191913
*/

#include "OrthogonalTriangle.h"

OrthogonalTriangle::OrthogonalTriangle(double side, char *color) : Shape(color) {
    if (side < 0) { throw "Exception: The side must be positive";}
    this->side = side;
}
OrthogonalTriangle::OrthogonalTriangle(char *color, double side) : Shape(color) {
    if (side < 0) { throw "Exception: The side must be positive";}
    this->side = side;
}

double OrthogonalTriangle::getArea() const {
    return (side * side) / 2;
}

double OrthogonalTriangle::getPerimeter() const {
    return 2 * side + sqrt(2) * side;
}

void OrthogonalTriangle::draw() const {
    int sideInt = int(side);
    for (int i = 0; i < sideInt; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

bool OrthogonalTriangle::operator==(const Shape& other) const{
    if (Shape::operator==(other) == 0){
        const OrthogonalTriangle* otherOrthogonalTriangle = dynamic_cast<const OrthogonalTriangle*>(&other);
        if (otherOrthogonalTriangle == nullptr) { return false; }
        return side == otherOrthogonalTriangle->side;
    }
    return false;
}

void OrthogonalTriangle::toOs(ostream& os) const {
    os << "Square details: color=" << color << ", side=" << side << endl;
    os << "area=" << getArea() << " perimeter=" << getPerimeter() << endl;
    draw();
}