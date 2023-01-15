/*  Assignment C++: 3
    Author: Amichai Malle,  ID: 308476977
            Eliav Cohen,    ID: 318191913
*/

#include "Shape.h"
#include <iostream>
using namespace std;

#ifndef _Square_H
#define _Square_H

class Square : public Shape {
    private:
        double side;
        //void draw() const;
    public:
        Square() : Shape() { side = 0; }
        Square(double side, char *color) noexcept(false);
        Square(char *color, double side) noexcept(false);
        virtual double getArea() const override;
        virtual double getPerimeter() const override;
        virtual void toOs(ostream& os) const override;
        friend ostream& operator<<(ostream& os, const Square& shape);
        //virtual bool operator==(const Shape& other) const;
        void draw() const;
        ~Square(){};
};


#endif
