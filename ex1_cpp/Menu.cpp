/*  Assignment C++: 1
    Author: Amichai Malle,  ID: 308476977
            Eliav Cohen,    ID: 318191913
 */

#include <iostream>
using namespace std;

#include "Menu.h"

Menu::Menu()
    : Machine(), stack(){
    choice = 0;
};
void Menu::mainMenu(){
    printMainMenu();
    cin >> choice;
    while(choice != 3){
        switch (choice) {
            case 1:
                shopMenu();
                break;
            case 2:
                stackMenu();
                break;
            default:
                cout << "Invalid selection." << endl;
                break;
        }
        printMainMenu();
        cin >> choice;
    }
    cout << "Goodbye!" << endl;
    //delete this;

}
void Menu::printMainMenu() const{
    cout << "(1) Fresh juice Shop" << endl;
    cout << "(2) Integer Stack" << endl;
    cout << "(3) Exit" << endl;
}
void Menu::shopMenu(){
    printShopMenu();
    cin >> choice;
    while(choice != 4){
        switch(choice){
            case 1:
                Machine.sellProduct('O');
                break;
            case 2:
                Machine.sellProduct('C');
                break;
            case 3:
                Machine.sellProduct('P');
                break;
            default:
                cout << "Invalid selection." << endl;
                break;
        }
        printShopMenu();
        cin >> choice;
    }
    cout << "Thank you!" << endl;
}
void Menu::printShopMenu() const{
    cout << "*** Welcome to juice shop ***" << endl;
    cout << "To select an item, enter" << endl;
    cout << "1 For Orange juice" << endl;
    cout << "2 For Carrot juice" << endl;
    cout << "3 For Pomegranate" << endl;
    cout << "4 To exit" << endl;
}
void Menu::stackMenu(){
    int Elememt;
    printStackMenu();
    cin >> choice;
    while(choice != 5){
        switch (choice) {
            case 1:
                cout << "Please insert the new element:" << endl;
                cin >> Elememt;
                stack.push(Elememt);
                break;
            case 2:
                Elememt = stack.peek();
                stack.pop();
                cout << "Removing  " << Elememt << endl;
                break;
            case 3:
                Elememt = stack.peek();
                cout << "The first element is: " << Elememt << endl;
                break;
            case 4:
                if(stack.isEmpty()){
                    cout << "The stack is empty" << endl;
                } else{
                    cout << "The stack is not empty" << endl;
                }
                break;
            default:
                cout << "Invalid selection." << endl;
                break;
        }
        printStackMenu();
        cin >> choice;
    }
    cout << "Thank you!" << endl;
}
void Menu::printStackMenu() const{
    cout << "*** Manage your integer stack ***" << endl;
    cout << "1 Push new element" << endl;
    cout << "2 Pop element" << endl;
    cout << "3 Show the first element" << endl;
    cout << "4 Check if empty" << endl;
    cout << "5 To exit" << endl;
}
Menu::~Menu(){
    //cout << "0!" << endl;
    //delete &Machine;
    //delete &stack;
};