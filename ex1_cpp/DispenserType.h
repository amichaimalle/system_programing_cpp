/*  Assignment C++: 1
    Author: Amichai Malle,  ID: 308476977
            Eliav Cohen,    ID: 318191913
 */

class DispenserType {
    private:
        int numberOfItems;
        int cost;
    public:
        DispenserType() {numberOfItems=0; cost=0;};
        DispenserType(int setNoOfItems, int setCost);
        int getNoOfItems() const {return numberOfItems;};
        int getCost() const {return cost;};
        void makeSale();
        void setNoOfItems(int num) {numberOfItems = num;};
        void setCost(int num) {cost = num;};
        ~DispenserType();
};
