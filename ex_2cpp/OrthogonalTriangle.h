/*  Assignment C++: 3
    Author: Amichai Malle,  ID: 308476977
            Eliav Cohen,    ID: 318191913
*/

#ifndef _OrthogonalTriangle_H
#define _OrthogonalTriangle_H

#include "Shape.h"
#include <cmath>
#include <iostream>
using namespace std;

class OrthogonalTriangle : public Shape {
    private:
        double side;
        //void draw() const;
    public:
        OrthogonalTriangle() : Shape() { side = 0; }
        OrthogonalTriangle(double side, char *color) noexcept(false);
        OrthogonalTriangle(char *color, double side) noexcept(false);
        virtual double getArea() const override;
        virtual double getPerimeter() const override;
        virtual void toOs(ostream& os) const override;
        virtual bool operator==(const Shape& other) const;
        void draw() const;
        ~OrthogonalTriangle(){};
};


#endif
