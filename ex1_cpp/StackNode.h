/*  Assignment C++: 1
    Author: Amichai Malle,  ID: 308476977
            Eliav Cohen,    ID: 318191913
 */

class StackNode {
    private:
        int data;
        StackNode *next;
    public:
        StackNode() {data = 0; next = nullptr;}
        StackNode(int data, StackNode *next);
        int getData() const {return data;}
        StackNode *getNext() const {return next;}
        ~StackNode(){};
};
