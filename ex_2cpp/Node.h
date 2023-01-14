/*  Assignment C++: 3
    Author: Amichai Malle,  ID: 308476977
            Eliav Cohen,    ID: 318191913
*/

#ifndef _Node_H
#define _Node_H

#include "iostream"
using namespace std;

template <class T>
class Node {
    private:
        T data;
        Node<T> *next;
    public:
        Node() {
            this->data = 0;
            this->next = nullptr;
        }
        Node(T data) {          // Constructor
            this->data = data;
            next = nullptr;
        }

        T getData() const { return data; }

        Node<T>* getNext() const { return next; }

        void setNext(Node<T> *nextToSet) { next = nextToSet; }

        //friend ostream& operator<<(ostream& os, const Node<T>& node){
        //   os << node.data << " ";
        //    return os;
        //}

        ~Node() {               // Destructor
            //delete data;
            //delete next;
        }
};

#endif
