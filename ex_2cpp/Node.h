/*  Assignment C++: 3
    Author: Amichai Malle,  ID: 308476977
            Eliav Cohen,    ID: 318191913
*/

#include "iostream"
using namespace std;

#ifndef _Node_H
#define _Node_H

template <class T>
class Node {
private:
    T data;
    Node<T> *next;
public:
    Node();                                     // default constructor
    Node(T data);                               // constructor
    const T& getData() const { return data; }   // getter for data
    Node<T>* getNext() const { return next; }   // getter for next
    void setData(T data) { this->data = data; } // setter for data
    void setNext(Node<T> *next) { this->next = next; }  // setter for next
    ~Node(){} // default Destructor
    // friend function for << operator of template class - must be defined in the class
    friend ostream& operator<<(ostream& os, const Node<T>& node){
        os << node.data << " ";
        return os;
    }

};

template <class T>
Node<T>::Node() {
    this->data = 0;
    this->next = nullptr;
}

template <class T>
Node<T>::Node(T data) {          // Constructor
    this->data = data;
    next = nullptr;
}

#endif
