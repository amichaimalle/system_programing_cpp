/*  Assignment C++: 1
    Author: Amichai Malle,  ID: 308476977
            Eliav Cohen,    ID: 318191913
 */

#include "StackNode.h"

class Stack {
    private:
        StackNode *top;
    public:
        Stack() {top = nullptr;}
        void push(int data);
        void pop();
        bool isEmpty() const;
        int peek() const;
        ~Stack();
};