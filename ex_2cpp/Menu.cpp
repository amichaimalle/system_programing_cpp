/*  Assignment C++: 3
    Author: Amichai Malle,  ID: 308476977
            Eliav Cohen,    ID: 318191913
*/

#include "Menu.h"
#define MAX_COLOR_SIZE max(strlen("green"), max(strlen("blue"), strlen("red")))+2 //+2 for the \0 and extra letter for error checking

Menu::Menu() {
     choice = 0;
}

void Menu::mainMenu() {
    LinkedList<Shape*> shapeList;
    while(choice != 4) {
        printMainMenu();
        cin >> choice;
        //try{
        switch (choice) {
            case 1:
                shapeList.insert(getShape());
                break;
            case 2:
                try {
                    shapeList.deleteNode();
                } catch (const char *msg) {
                    cout << msg << endl;
                    cout << "Please try again" << endl;
                }
                break;
            case 3:
                try {
                    cout << *shapeList.getTop();
                } catch (const char *msg) {
                    cout << msg << endl;
                }
                break;
            default:
                cout << "Invalid selection." << endl;
        }
        //} catch (const char *msg) {
        //    cout << msg << endl;
        //    cout << "Please try again" << endl;
        //}
    }
    exit(0);
}

Shape *Menu::getShape() {
    int shapeChoice;
    Shape *shape = nullptr;
    cleanBuffer();
    cout << "Choose 1 for Square, 2 for Circle, 3 for Triangle: ";
    cin >> shapeChoice;
    switch (shapeChoice) {
        case 1: {
            do {
                shape = getSquare();
            } while (shape == nullptr);
            return shape;
        }
        case 2:
            do {
                shape = getCircle();
            } while (shape == nullptr);
            return shape;
        case 3:
            do {
                shape = getOrthogonalTriangle();
            } while (shape == nullptr);
            return shape;
        default:
            cout << "Invalid choice" << endl;
            return nullptr;
    }
}

Shape *Menu::getSquare(){
    //char *color = new char[MAX_COLOR_SIZE];
    char color[MAX_COLOR_SIZE];
    double radius;
    cout << "Enter square's color: ";
    cleanBuffer();
    cin.getline(color, MAX_COLOR_SIZE);
    cout << "Enter square's side length: ";
    cin >> radius;
    try {
        return new Square(radius, color);
    } catch (const char *msg) {
        cout << msg << endl;
        cout << "please try again" << endl;
        return nullptr;
    }
}

Shape *Menu::getOrthogonalTriangle(){
    //char *color = new char[MAX_COLOR_SIZE];
    char color[MAX_COLOR_SIZE];
    double side;
    cout << "Enter Triangle's color: ";
    cleanBuffer();
    cin.getline(color, MAX_COLOR_SIZE);
    cout << "Enter Triangle's side: ";
    cin >> side;
    try {
        return new OrthogonalTriangle(side, color);
    } catch (const char *msg) {
        cout << msg << endl;
        return nullptr;
    }
}

Shape *Menu::getCircle(){
    //char *color = new char[MAX_COLOR_SIZE];
    char color[MAX_COLOR_SIZE];
    double side;
    cout << "Enter circle's color: ";
    cleanBuffer();
    cin.getline(color, MAX_COLOR_SIZE);
    cout << "Enter circle's radius: ";
    cin >> side;
    try {
        return new Circle(side, color);
    } catch (const char *msg) {
        cout << msg << endl;
        return nullptr;
    }
}

void Menu::cleanBuffer() {
    char c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}

void Menu::printMainMenu() {
    cout << "=======================================" << endl;
    cout << "<1>Add element to the list" << endl;
    cout << "<2>Remove the last shape from list" << endl;
    cout << "<3>Print the last shape" << endl;
    cout << "<4>Exit" << endl;
    cout << "=======================================" << endl;
}