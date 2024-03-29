/*  Assignment C++: 3
    Author: Amichai Malle,  ID: 308476977
            Eliav Cohen,    ID: 318191913
*/

#include "Menu.h"

#define MAX_COLOR_SIZE max(strlen("green"), max(strlen("blue"), strlen("red")))+2 //+2 for the \0 and extra letter for error checking
// shapes definitions
#define SQUARE "square"
#define SQUARE_FEATURE "side length"
#define CIRCLE "circle"
#define CIRCLE_FEATURE "radius"
#define TRIANGLE "Triangle"
#define TRIANGLE_FEATURE "side"

// Messages
#define TRY_AGAIN "Please try again"
#define INVALID_CHOICE "Invalid choice"
#define INVALID_SELECTION "Invalid selection."
#define EXIT_MSG "Goodbye!"


Menu::Menu() {
     choice = 0;
}

void Menu::mainMenu() {     // main menu
    LinkedList<Shape*> shapeList;
    while(true) {
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
                    cout << TRY_AGAIN << endl;
                }
                break;
            case 3:
                try {
                    printLastShape(*shapeList.getTop());
                } catch (const char *msg) {
                    cout << msg << endl;
                }
                break;
            case 4:
                cout << EXIT_MSG << endl;
                exit(0);
            default:
                cout << INVALID_SELECTION << endl;
                break;
        }
    }
}

void Menu::printLastShape(const Shape& shape) const{    // print the last shape details
    // RTTI is not needed here and draw can be implement in << operator.
    // I did this to show how RTTI can be used in this case as assignment asked.
    cout << shape;  // use operator<< on shape type
    const Square* square = dynamic_cast<const Square*>(&shape); // RTTI mechanism for draw() use
    if (square != nullptr) {
        square->draw();
    }
    const OrthogonalTriangle* triangle = dynamic_cast<const OrthogonalTriangle*>(&shape);   // RTTI mechanism for draw() use
    if (triangle != nullptr) {
        triangle->draw();
    }
}

Shape *Menu::chooseShape() {   // choose shape type to insert
    int shapeChoice;
    Shape *shape = nullptr;
    char shapeName[20], shapeFeature[30];
    //cleanBuffer();
    cout << "Choose 1 for Square, 2 for Circle, 3 for Triangle: ";
    cin >> shapeChoice;
    switch (shapeChoice) {
        case 1:
            strcpy(shapeName,SQUARE);
            strcpy(shapeFeature,SQUARE_FEATURE);
            break;
        case 2:
            strcpy(shapeName,CIRCLE);
            strcpy(shapeFeature,CIRCLE_FEATURE);
            break;
        case 3:
            strcpy(shapeName,TRIANGLE);
            strcpy(shapeFeature,TRIANGLE_FEATURE);
            break;
        default:
            cout << INVALID_CHOICE << endl;
            return nullptr;
    }
    do{
        shape = getShape(shapeName, shapeFeature);
    } while (shape == nullptr);
    return shape;
}

Shape *Menu::getShape(char *shapeName, char *shapeFeature) {  // get shape details from user
    //char *color = new char[MAX_COLOR_SIZE];
    char color[MAX_COLOR_SIZE];
    double feature;
    cout << "Enter " << shapeName <<"'s color: ";
    //cleanBuffer();
    //cin.getline(color, MAX_COLOR_SIZE);
    cin >> color;
    cout << "Enter " << shapeName << "'s " << shapeFeature << ": ";
    cin >> feature;
    try {   // try to create the shape
        if (strcmp(shapeName,SQUARE) == 0) {
            return new Square(color, feature);
        } else if (strcmp(shapeName,CIRCLE) == 0) {
            return new Circle(color, feature);
        } else { // if (strcmp(shapeName,"Triangle") == 0) {
            return new OrthogonalTriangle(color, feature);
        }
    } catch (const char *msg) {
        cout << msg << endl;
        cout << TRY_AGAIN << endl;
        return nullptr;
    }
}

void Menu::cleanBuffer() {  // clean buffer
    while (getchar() != '\n' && getchar() != EOF);
}

void Menu::printMainMenu() {    // print main menu
    cout << "=======================================" << endl;
    cout << "<1>Add element to the list" << endl;
    cout << "<2>Remove the last shape from list" << endl;
    cout << "<3>Print the last shape" << endl;
    cout << "<4>Exit" << endl;
    cout << "=======================================" << endl;
}