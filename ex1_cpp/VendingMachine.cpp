/*  Assignment C++: 1
    Author: Amichai Malle,  ID: 308476977
            Eliav Cohen,    ID: 318191913
 */

#include <iostream>
using namespace std;

#include "VendingMachine.h"

VendingMachine::VendingMachine()
    : orange(10, 45), carrot(5, 50),
     pomegranate(4, 75), counter() {
    cout << "VendingMachine constructor" << endl;
};
void VendingMachine::sellProduct(char product) {
    int Payment = 0;
    switch (product) {
        case 'O':
            sellFruit(orange);
            break;
        case 'C':
            sellFruit(carrot);
            break;
        case 'P':
            sellFruit(pomegranate);
            break;
        default:
            break;
    }
}
void VendingMachine::sellFruit(DispenserType fruit) {
    int moneyReceived = 0;
    if (fruit.getNoOfItems() > 0) {
        if (getPayment(fruit.getCost())) {
            printCollectItem();
            fruit.makeSale();
            counter.acceptAmount(fruit.getCost());
        } else {
            printNotEnoughMoney();
        }
    } else {printSoldOut();}
}
bool VendingMachine::getPayment(int price) {
    int paymentNeeded = price;
    int moneyRecived = 0;
    cout << "Please deposit " << price << " cents" << endl;
    cin >> moneyRecived;
    paymentNeeded = paymentNeeded - moneyRecived;
    if (paymentNeeded > 0){
        cout << "Please deposit another " << price - moneyRecived << " cents" << endl;
        cin >> moneyRecived;
        paymentNeeded = paymentNeeded - moneyRecived;
    }
    if (paymentNeeded > 0){return false;}
    return true;
}
void VendingMachine::printSoldOut() const {
    cout << "Sorry, this item is sold out" << endl;
}
void VendingMachine::printCollectItem() const {
    cout << "Collect your item at the bottom and enjoy" << endl;
    cout << "*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*" << endl;
}
void VendingMachine::printNotEnoughMoney() const {
    cout << "The amount is not enough. Collect what you deposited" << endl;
    cout << "*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*" << endl;
}
VendingMachine::~VendingMachine() {}