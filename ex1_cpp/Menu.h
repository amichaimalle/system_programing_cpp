/*  Assignment C++: 1
    Author: Amichai Malle,  ID: 308476977
            Eliav Cohen,    ID: 318191913
 */

#include <iostream>
using namespace std;

#include "VendingMachine.h"
#include "Stack.h"

class Menu {
    private:
        VendingMachine Machine;
        Stack stack;
        int choice;
        void printMainMenu() const;
        void shopMenu();
        void printShopMenu() const;
        void stackMenu();
        void printStackMenu() const;
    public:
        Menu();
        void mainMenu();
        ~Menu();
};