/*  Assignment C++: 3
    Author: Amichai Malle,  ID: 308476977
            Eliav Cohen,    ID: 318191913
*/

#include "Circle.h"

Circle::Circle(double radius, char *color) : Shape(color) {
    if (radius <= 0) {throw "Radius must be positive";}
    this->radius = radius;
}

Circle::Circle(char *color, double radius) : Shape(color) {
    if (radius <= 0) {throw "Radius must be positive";}
    this->radius = radius;
}

double Circle::getArea() const {
    return 3.14 * radius * radius;
}

double Circle::getPerimeter() const {
    return 2 * 3.14 * radius;
}

//bool Circle::operator==(const Shape& other) const{
//    if (Shape::operator==(other) == 0){
//        const Circle* otherCircle = dynamic_cast<const Circle*>(&other);
//        if (otherCircle == nullptr) { return false; }
//        return radius == otherCircle->radius;
//    }
//    return false;
//}

ostream& operator<<(ostream& os, const Circle& shape){
    shape.toOs(os);
    return os;
}

void Circle::toOs(ostream& os) const {
    os << "Square details: color=" << color << ", radius=" << radius << endl;
    os << "area=" << getArea() << " perimeter=" << getPerimeter() << endl;
}