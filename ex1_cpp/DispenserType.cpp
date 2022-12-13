/*  Assignment C++: 1
    Author: Amichai Malle,  ID: 308476977
            Eliav Cohen,    ID: 318191913
 */

#include <iostream>
using namespace std;

#include "DispenserType.h"

DispenserType::DispenserType(int setNoOfItems, int setCost) {
    numberOfItems = setNoOfItems;
    cost = setCost;
}
void DispenserType::makeSale() {
    if (numberOfItems > 0) {
        numberOfItems--;
    } else {
        cout << "No more items left" << endl;
    }
}
DispenserType::~DispenserType() {
//    cout << "DispenserType destructor00" << endl;
//    delete &numberOfItems;
//    delete &cost;
//    cout << "DispenserType destructor11" << endl;
}

