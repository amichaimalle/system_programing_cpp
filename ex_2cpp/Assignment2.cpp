/*  Assignment C++: 3
    Author: Amichai Malle,  ID: 308476977
            Eliav Cohen,    ID: 318191913
*/


#include "Menu.h"
#include "LinkedList.h"
#include "Square.h"
#include "Circle.h"
#include "OrthogonalTriangle.h"
#include <iostream>
using namespace std;

/*int main() {
    //simply creating a menu instance, then calling mainMenu(). the rest is inside mainMenu().
    Menu a;
    a.mainMenu();
    cout << "yala beseder!" << endl;
    return 0;
}*/

/*

int main() {
    //---------------Node Test-----------------
    //enter your correct getters function names - line 10
    Node<int> n1; //check for default constructor
    Node<int> n2(5); //check for constructor

    if ((n2.getData() != 5) || (n2.getNext() != nullptr)) { //check for getData() and getNext()
        cout << "Error: Node constructor" << endl;
    } else {
        cout << "Node constructor: OK" << endl;
    }

    //---------------LinkedList Test-----------------
    LinkedList<int> list;
    if (list.search(5)) { //check for search()
        cout << "Error: LinkedList empty search" << endl;
    } else {
        cout << "LinkedList empty search: OK" << endl;
    }
    list.insert(1);
    list.insert(2);
    list.insert(-3);
    list.insert(40);
    list.insert(25);
    list.insert(40);
    list.insert(2);
    if ((list.search(40)) && (list.search(25)) && (list.search(1)) && (list.search(2)) && (list.search(-3))) { //check for search()
        cout << "LinkedList search: OK" << endl;
    } else {
        cout << "Error: LinkedList search" << endl;
    }
    if (list.deleteNode(40) != 40) { //check for deleteNode()
        cout << "Error: LinkedList deleteNode" << endl;
    } else {
        cout << "LinkedList deleteNode: OK" << endl;
    }
    if (list.deleteNode() != 2) { //check for deleteNode()
        cout << "Error: LinkedList deleteNode" << endl;
    } else {
        cout << "LinkedList deleteNode: OK" << endl;
    }
    if (list.getTop() == 25) { //check for getTop()
        cout << "LinkedList getTop: OK" << endl;
    } else {
        cout << "Error: LinkedList getTop" << endl;
    }
    list.deleteNode(-3);
    list.deleteNode(1);
    if (list.search(-3) || !(list.search(40))) { //check for search()
        cout << "Error: LinkedList deleteNode" << endl;
    } else {
        cout << "LinkedList deleteNode: OK" << endl;
    }
    int x = list.getTop();
    x = 70;
    cout << "your output: "<< list << " | list should be: 25->40->2" << endl; //check for operator<<

    //---------------Square Test-----------------
    Square s1;  //check for default constructor
    try {
        Square s2(10.7, "HowLongCanYourDynamicStringGet"); //check for constructor
    } catch (const char* msg) {
        cout << "Square constructor threw exception: OK" << endl;
    }
    Square s2(10.7, "red"); //check for constructor
    try {
        Square s3("DidYouAllowedBothWays?", 5);
    } catch (const char* msg) {
        cout << "Square constructor threw exception: OK" << endl;
    }
    Square s3("green", 5);
    try {
        Square s4("blue", -5);
    } catch (const char* msg) {
        cout << "Square constructor threw exception: OK" << endl;
    }
    Square s4("blue", 5);
    if (s2.getPerimeter() != 42.8) { //check for getPerimeter()
        cout << "Error: Square getPerimeter" << endl;
    } else {
        cout << "Square getPerimeter: OK" << endl;
    }
    cout << "your output: " << s2.getArea() << " | area should be: 114.49" << endl; //check for getArea()
    cout << "\nyour output: " << endl;
    s2.draw(); //check for draw()
    cout << "|square should be:\n" << "* * * * * * * * * *\n"
                                      "* * * * * * * * * *\n"
                                      "* * * * * * * * * *\n"
                                      "* * * * * * * * * *\n"
                                      "* * * * * * * * * *\n"
                                      "* * * * * * * * * *\n"
                                      "* * * * * * * * * *\n"
                                      "* * * * * * * * * *\n"
                                      "* * * * * * * * * *\n"
                                      "* * * * * * * * * * " << endl;

    cout << "\n\nyour output " << endl;
    s3.draw(); //check for draw()
    cout << "|square should be:\n" << "* * * * *\n"
                                      "* * * * *\n"
                                      "* * * * *\n"
                                      "* * * * *\n"
                                      "* * * * * " << endl;
    cout << s2 << endl; //check for operator<<

    //---------------Circle Test-----------------
    Circle c1; //check for default constructor
    try {
        Circle c2(12, "HowLongCanYourDynamicStringGet"); //check for constructor
    } catch (const char *msg) {
        cout << "Circle constructor threw exception: OK" << endl;
    }
    Circle c2(10.7, "red"); //check for constructor
    try {
        Circle c3("DidYouAllowedBothWays?", 12); //check for constructor
    } catch (const char *msg) {
        cout << "Circle constructor threw exception: OK" << endl;
    }
    Circle c3("green", 5);
    try {
        Circle c4("green", -5); //check for constructor
    } catch (const char *msg) {
        cout << "Circle constructor threw exception: OK" << endl;
    }
    Circle c4("blue", 10);
    if (c2.getPerimeter() != 67.196) { //check for getPerimeter()
        cout << "Error: Circle getPerimeter" << endl;
    } else {
        cout << "Circle getPerimeter: OK" << endl;
    }
    cout << "your output: " << c2.getArea() << " | area should be: 359.499" << endl; //check for getArea()
    cout << c2 << endl; //check for operator<<
    //-----------------Triangle Test-----------------
    OrthogonalTriangle t1; //check for default constructor
    try {
        OrthogonalTriangle t2(12, "HowLongCanYourDynamicStringGet"); //check for constructor
    } catch (const char *msg) {
        cout << "Triangle constructor threw exception: OK" << endl;
    }
    OrthogonalTriangle t2(12.3, "green"); //check for constructor
    try {
        OrthogonalTriangle t3("DidYouAllowedBothWays?", 12); //check for constructor
    } catch (const char *msg) {
        cout << "Triangle constructor threw exception: OK" << endl;
    }
    OrthogonalTriangle t3("blue", 8.5);
    try {
        OrthogonalTriangle t4("blue", -8.5); //check for constructor
    } catch (const char *msg) {
        cout << "Triangle constructor threw exception: OK" << endl;
    }
    OrthogonalTriangle t4("red", 10);
    cout << "your output: " << t2.getPerimeter() << " | perimeter should be: 41.9948" << endl; //check for getPerimeter()
    cout << "your output: " << t2.getArea() << " | area should be: 75.645" << endl; //check for getArea()
    cout << "\nyour output: " << endl;
    t2.draw(); //check for draw()
    cout << "|correct output:" << endl;
    cout << "*\n"
            "* *\n"
            "* * *\n"
            "* * * *\n"
            "* * * * *\n"
            "* * * * * *\n"
            "* * * * * * *\n"
            "* * * * * * * *\n"
            "* * * * * * * * *\n"
            "* * * * * * * * * *\n"
            "* * * * * * * * * * *\n"
            "* * * * * * * * * * * *" << endl;
    cout << "\n\nyour output: " << endl;
    t3.draw(); //check for draw()
    cout << "|correct output:" << endl;
    cout << "*\n"
            "* *\n"
            "* * *\n"
            "* * * *\n"
            "* * * * *\n"
            "* * * * * *\n"
            "* * * * * * *\n"
            "* * * * * * * *" << endl;
    cout << t3 << endl; //check for operator<<
}*/