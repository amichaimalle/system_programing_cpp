/*  Assignment C++: 3
    Author: Amichai Malle,  ID: 308476977
            Eliav Cohen,    ID: 318191913
*/

#include "Shape.h"
#include <cmath>
#include <iostream>

#ifndef _OrthogonalTriangle_H
#define _OrthogonalTriangle_H
using namespace std;

class OrthogonalTriangle : public Shape {
    private:
        double side;
    public:
        OrthogonalTriangle() : Shape() { side = 0; }    // default constructor
        OrthogonalTriangle(double side, char *color) noexcept(false);   // constructor
        OrthogonalTriangle(char *color, double side) noexcept(false);   // constructor
        virtual double getArea() const override;        // calculate the area of the triangle
        virtual double getPerimeter() const override;   // calculate the perimeter of the triangle
        virtual void toOs(ostream& os) const override;  // print the triangle details - use for operator<< shape type
        friend ostream& operator<<(ostream& os, const OrthogonalTriangle& shape);
        void draw() const;
        ~OrthogonalTriangle(){};    // default destructor
};

#endif
