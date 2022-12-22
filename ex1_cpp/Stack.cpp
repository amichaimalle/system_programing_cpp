/*  Assignment C++: 1
    Author: Amichai Malle,  ID: 308476977
            Eliav Cohen,    ID: 318191913
 */

#include <climits>
#include <iostream>
using namespace std;
#include "Stack.h"

void Stack::push(int data) {
    // function that push the data to the stack
    StackNode *newNode = new StackNode(data, top);
    top = newNode;
}
void Stack::pop() {
    // function that pop the data from the stack
    if (top == nullptr) {
        cout << "Stack is empty" << endl;
        return;
    }
    StackNode *temp = top;
    top = top->getNext();
    delete temp;
}
bool Stack::isEmpty() const {
    // function that check if the stack is empty
    return top == nullptr;
}
int Stack::peek() const {
    // function that return the top of the stack
    if (top == nullptr) {
        return INT_MIN;
    }
    return top->getData();
}
Stack::~Stack(){
    // function that delete the stack (destractor)
    while (top != nullptr){
        StackNode *temp = top;
        top = top->getNext();
        delete temp;
    }
}
