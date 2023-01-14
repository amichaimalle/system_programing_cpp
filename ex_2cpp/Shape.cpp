/*  Assignment C++: 3
    Author: Amichai Malle,  ID: 308476977
            Eliav Cohen,    ID: 318191913
*/

#include "Shape.h"

Shape::Shape(char *color) {
    if (not(strcmp(color,"red") && strcmp(color,"green") && strcmp(color,"blue"))) {
        this->color = new char[strlen(color)+1];
        strcpy(this->color,color);
    } else {
        throw "Exception: color must be red green or blue";
    }
}

bool Shape::operator==(const Shape& other) const{
    return (strcmp(color,other.color) == 0);
}

ostream& operator<<(ostream& os, const Shape& shape){
    shape.toOs(os);
    return os;
}

Shape::~Shape() {}