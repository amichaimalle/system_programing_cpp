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
        //cleanBuffer();
        cin >> choice;
        switch (choice) {
            case 1:
                shapeList.insert(chooseShape());
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
                    printLastShape(*shapeList.getTop());
                } catch (const char *msg) {
                    cout << msg << endl;
                }
                break;
            default:
                cout << "Invalid selection." << endl;
        }
    }
    exit(0);
}

void Menu::printLastShape(const Shape& shape) const{
    cout << shape;
    const Square* square = dynamic_cast<const Square*>(&shape);
    if (square != nullptr) {
        square->draw();
    }
    const OrthogonalTriangle* triangle = dynamic_cast<const OrthogonalTriangle*>(&shape);
    if (triangle != nullptr) {
        triangle->draw();
    }
}

Shape *Menu::chooseShape() {
    int shapeChoice;
    Shape *shape = nullptr;
    char shapeName[20], shapeFeature[30];
    cleanBuffer();
    cout << "Choose 1 for Square, 2 for Circle, 3 for Triangle: ";
    cin >> shapeChoice;
    switch (shapeChoice) {
        case 1:
            strcpy(shapeName,"square");
            strcpy(shapeFeature,"side length");
            break;
        case 2:
            strcpy(shapeName,"circle");
            strcpy(shapeFeature,"radius");
            break;
        case 3:
            strcpy(shapeName,"Triangle");
            strcpy(shapeFeature,"side");
            break;
        default:
            cout << "Invalid choice" << endl;
            return nullptr;
    }
    do{
        shape = getShape(shapeName, shapeFeature);
    } while (shape == nullptr);
    return shape;
}

Shape *Menu::getShape(char *shapeName, char *shapeFeature) {
    //char *color = new char[MAX_COLOR_SIZE];
    char color[MAX_COLOR_SIZE];
    double feature;
    cout << "Enter " << shapeName <<"'s color: ";
    cleanBuffer();
    cin.getline(color, MAX_COLOR_SIZE);
    cout << "Enter " << shapeName << "'s " << shapeFeature << ": ";
    cin >> feature;
    try {
        if (strcmp(shapeName,"square") == 0) {
            return new Square(color, feature);
        } else if (strcmp(shapeName,"circle") == 0) {
            return new Circle(color, feature);
        } else { // if (strcmp(shapeName,"Triangle") == 0) {
            return new OrthogonalTriangle(color, feature);
        }
    } catch (const char *msg) {
        cout << msg << endl;
        cout << "please try again" << endl;
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