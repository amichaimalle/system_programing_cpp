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
    Node() : data(0), next(nullptr) {}
    Node(T data) : data(data), next(nullptr) {}
    T getData() const { return data; }
    Node<T>* getNext() const { return next; }
    void setData(T data) { this->data = data; }
    void setNext(Node<T> *next) { this->next = next; }
    friend ostream& operator<<(ostream& os, const Node<T>& node) {
        os << node.data;
        return os;
    }
};

/*template <class T>
Node<T>::Node() {
    this->data = 0;
    this->next = nullptr;
}

template <class T>
Node<T>::Node(T data) {          // Constructor
    this->data = data;
    next = nullptr;
}*/

//template <class T>
//T Node<T>::getData() const { return data; }

//template <class T>
//Node<T>* Node<T>::getNext() const { return next; }

//template <class T>
//void Node<T>::setNext(Node<T> *nextToSet) { next = nextToSet; }

//friend ostream& operator<<(ostream& os, const Node<T>& node){
//   os << node.data << " ";
//    return os;
//}

//template <class T>
//Node<T>::~Node() {               // Destructor
    //delete data;
    //delete next;
//}


#endif
