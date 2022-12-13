/*  Assignment C++: 1
    Author: Amichai Malle,  ID: 308476977
            Eliav Cohen,    ID: 318191913
 */

#include "DispenserType.h"
#include "CashRegister.h"

class VendingMachine {
    private:
        DispenserType orange;
        DispenserType carrot;
        DispenserType pomegranate;
        CashRegister counter;
        bool getPayment(int price);
        void printSoldOut() const;
        void sellFruit(DispenserType fruit);
        void printCollectItem() const;
        void printNotEnoughMoney() const;
    public:
        VendingMachine();
        void sellProduct(char product);
        //void showSelection();
        ~VendingMachine();
};
