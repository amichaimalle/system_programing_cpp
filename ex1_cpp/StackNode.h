/*  Assignment C++: 1
    Author: Amichai Malle,  ID: 308476977
            Eliav Cohen,    ID: 318191913
 */

#ifndef __STACKNODE_H
#define __STACKNODE_H

class StackNode {
    // this class will define the stack node, and will include the data and the pointer to the next node
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

#endif
