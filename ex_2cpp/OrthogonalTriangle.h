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
        //void draw() const;    // better to by private but needed for menu
    public:
        OrthogonalTriangle() : Shape() { side = 0; }    // default constructor
        OrthogonalTriangle(double side, char *color) noexcept(false);   // constructor
        OrthogonalTriangle(char *color, double side) noexcept(false);   // constructor
        virtual double getArea() const;
        virtual double getPerimeter() const;
        virtual void toOs(ostream& os) const;
        friend ostream& operator<<(ostream& os, const OrthogonalTriangle& shape);
        void draw() const;
        ~OrthogonalTriangle(){};    // default destructor
};

#endif
