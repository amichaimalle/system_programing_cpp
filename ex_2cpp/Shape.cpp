/*  Assignment C++: 3
    Author: Amichai Malle,  ID: 308476977
            Eliav Cohen,    ID: 318191913
*/

#include "Shape.h"

#define INVALID_COLOR "Exception: color must be red green or blue"
// valid colors
#define RED "red"
#define BLUE "blue"
#define GREEN "green"

Shape::Shape(char *color) {    // constructor with exception on non valid color
    if (not(strcmp(color,RED) && strcmp(color,GREEN) && strcmp(color,BLUE))) {
        this->color = new char[strlen(color)+1];
        strcpy(this->color,color);
    } else {
        throw INVALID_COLOR;
    }
}

ostream& operator<<(ostream& os, const Shape& shape){   // print the shape details
    shape.toOs(os);
    return os;
}

Shape::~Shape() {}  // default destructor implementation