/*  Assignment C++: 3
    Author: Amichai Malle,  ID: 308476977
            Eliav Cohen,    ID: 318191913
*/

#ifndef _Shape_H
#define _Shape_H

#include <string>
#include <iostream>
using namespace std;

class Shape {
    protected:
        char *color;
    public:
        Shape() { color = nullptr; }
        Shape(char *color) noexcept(false);
        virtual double getPerimeter() const = 0;
        virtual double getArea() const = 0;
        virtual void toOs(ostream& os) const = 0;
        friend ostream& operator<<(ostream& os, const Shape& shape);
        virtual bool operator==(const Shape& other) const;
        virtual ~Shape() = 0;
};

#endif
