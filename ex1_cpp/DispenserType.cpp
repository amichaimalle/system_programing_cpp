/*  Assignment C++: 1
    Author: Amichai Malle,  ID: 308476977
            Eliav Cohen,    ID: 318191913
 */

#include <iostream>
using namespace std;

#include "DispenserType.h"

DispenserType::DispenserType(int setNoOfItems, int setCost) {
    cout << "DispenserType constructor" << endl;
    numberOfItems = setNoOfItems;
    cost = setCost;
}
void DispenserType::makeSale() {
        numberOfItems--;
}
DispenserType::~DispenserType() {
    cout << "DispenserType destructor" << endl;
}

