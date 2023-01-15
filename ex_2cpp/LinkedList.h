/*  Assignment C++: 3
    Author: Amichai Malle,  ID: 308476977
            Eliav Cohen,    ID: 318191913
*/

#include "Node.h"
#include "iostream"
using namespace std;

#ifndef _LinkedList_H
#define _LinkedList_H

template <class T>
class LinkedList {
private:
    Node<T> *head;
public:
    LinkedList() { this->head = nullptr; }   // Constructor
    void insert(const T &data);
    T deleteNode() noexcept(false);
    T deleteNode(const T &data) noexcept(false);
    bool search(const T &data);
    const T &getTop() const noexcept(false);
    friend ostream &operator<<(ostream &os, const LinkedList<T> &list);
    ~LinkedList();
};

template <class T>
void LinkedList<T>::insert(const T& data) {               // Insert at the head of list
    Node<T> *newNode = new Node<T>(data);
    newNode->setNext(head);
    head = newNode;
}

template <class T>
T LinkedList<T>::deleteNode() {                    // try to Delete head of the list
    Node<T> *temp = head;
    if (head == nullptr) {throw "Exception: The List is empty!";}
    head = head->getNext();
    T data = temp->getData();
    delete temp;
    return data;
}

template <class T>
T LinkedList<T>::deleteNode(const T& data) {       // Delete specific node with data
    Node<T> *temp = head;
    if (head->getData() == data) {
        try{
            return deleteNode();
        } catch (const char* msg) {
            throw msg;
        }
    }
    while (temp->getNext() != nullptr) {
        if (temp->getNext()->getData() == data){
            Node<T> *nodeToDelete = temp->getNext();
            temp->setNext(nodeToDelete->getNext());
            T dataToRet = nodeToDelete->getData();
            delete nodeToDelete;
            return dataToRet;
        }
        temp = temp->getNext();
    }
    throw "Exception: The node was not found!";
}

template <class T>
bool LinkedList<T>::search(const T& data) {             // Search for a node in the list
    Node<T> *temp = head;
    while (temp != nullptr) {
        if (temp->getData() == data) {
            return true;
        }
        temp = temp->getNext();
    }
    return false;
}

template <class T>
const T& LinkedList<T>::getTop() const {
    if (head == nullptr) {throw "Exception: The List is empty!";}
    return head->getData();
}

template <class T>
ostream& operator<<(ostream& os, const LinkedList<T>& list){
    Node<T> *temp = list.head;
    while (temp != nullptr) {
        os << temp->getData() << " ";
        temp = temp->getNext();
    }
    return os;
}

template <class T>
LinkedList<T>::~LinkedList() {                         // Destructor
    Node<T> *temp = head;
    while (temp != nullptr) {
        head = head->getNext();
        delete temp;
        temp = head;
    }
    delete temp;
}

#endif
