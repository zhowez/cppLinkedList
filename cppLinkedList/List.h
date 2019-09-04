/*
 * Name: James Z. Howes
 * Date Submitted: 08/05/2019
 * Lab Section: 002
 * Assignment Name: Lab 1
 */

#pragma once

#include <iostream>
#include <string>
#include "Node.h"
using namespace std;

//This class represents a linked list of node objects
//Do not modify anything in the class interface
template <class T>
class List{
    
private:
    Node<T> * start; //pointer to the first node in this list
    int mySize;  //size (or length) of this list
    
public:
    List();
    ~List();
    int size();
    bool empty();
    void insertStart(T);
    void insertEnd(T);
    void insertAt(T, int);
    void removeStart();
    void removeEnd();
    void removeAt(int);
    T getFirst();
    T getLast();
    T getAt(int);
    int find(T);
    
    //Print the name and this list's size and values to stdout
    //This function is already implemented (no need to change it)
    void print(string name){
        cout << name << ": ";
        cout << "size = " << size();
        cout << ", values = ";
        Node<T> * iterator = start;
        while(iterator != nullptr){
            cout << iterator->value << ' ';
            iterator = iterator->next;
        }
        cout << endl;
    }
    
}; //end of class interface (you may modify the code below)

//Implement all of the functions below
//Construct an empty list by initializig this list's instance variables
template <class T>
List<T>::List(){
    
    mySize = 0;
    this->start = nullptr;
}

//Destroy all nodes in this list to prevent memory leaks
template <class T>
List<T>::~List(){
    
    if (this->mySize > 0){
        Node<T> *temp;
        while (this->start != nullptr) {
            temp = start;
            start = start->next;
            delete temp;
        }
    }
}

//Return the size of this list
template <class T>
int List<T>::size(){
    
    return this->mySize;
}

//Return true if this list is empty
//Otherwise, return false
template <class T>
bool List<T>::empty(){
    
    if (this->mySize <= 0){
        return true;
    } else {
        return false;
    }
}

//Create a new node with value, and insert that new node
//into this list at start
template <class T>
void List<T>::insertStart(T value){
    
    if (this->mySize == 0){
        this->start = new Node<T>(value);
        ++this->mySize;
    } else {
        Node<T> *temp = new Node<T>(value);
        temp->next = start;
        start = temp;
        ++this->mySize;
    }
}

//Create a new node with value, and insert that new node
//into this list at end
template <class T>
void List<T>::insertEnd(T value){
    
    if (this->mySize == 0){
        this->start = new Node<T>(value);
        ++this->mySize;
    } else {
        Node<T> *temp = start;
        while (temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = new Node<T>(value);
        ++this->mySize;
    }
}

//Create a new node with value <value>, and insert that new node at position j
template <class T>
void List<T>::insertAt(T value, int j){
    
    if (j == 1){
        this->insertStart(value);
    } else if (j == this->mySize + 1 ){
        this->insertEnd(value);
    } else if (j > 1 && j < this->mySize + 1){
        int count = 1;
        Node<T> *temp = start;
        while (count < j-1){
            temp = temp->next;
            ++count;
        }
        
        Node<T> *newNode = new Node<T>(value);
        newNode->next = temp->next;
        temp->next = newNode;
        ++this->mySize;
    } else {
        //j is negitive or too big
        std::cout << "The index " << j
        << "is either negitive or too big" << std::endl;
    }
}

//Remove node at start
//Make no other changes to list
template <class T>
void List<T>::removeStart(){
    
    if (this->mySize == 1){
        delete this->start;
        start = nullptr;
        --this->mySize;
    } else if (this->mySize > 1){
        Node<T> *deleteNode = start;
        start = start->next;
        delete deleteNode;
        --this->mySize;
    }
}

//Remove node at end
//Make no other changes to list
template <class T>
void List<T>::removeEnd(){
    
    if (this->mySize == 1){
        delete this->start;
        start = nullptr;
        --this->mySize;
    } else if (this->mySize > 1){
        Node<T> *temp = start;
        while (temp->next->next != nullptr) {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
        --this->mySize;
    }
}

//Remove node at position j
//Make no other changes to list
template <class T>
void List<T>::removeAt(int j){
    
    if (j == 1){
        this->removeStart();
    } else if (j == this->mySize){
        this->removeEnd();
    } else if (j > 0 && j < this->mySize) {
        int count = 1;
        Node<T> *temp = start;
        while (count < j-1){
            temp = temp->next;
            ++count;
        }
        Node<T> *deleteNode = temp->next;
        temp->next = temp->next->next;;
        delete deleteNode;
        --this->mySize;
    } else {
        std::cout << "The index " << j
        << "is either negitive or too big" << std::endl;
    }
    
}

//Return the value of the first node in the Linked List,
//If no first node, return the default constructed value: T()
template <class T>
T List<T>::getFirst(){
    
    if (this->mySize > 0){
        return this->start->value;
    } else {
        return T();
    }
}

//Return the value of the last node in the Linked List,
//If no first node, return the default constructed value: T()
template <class T>
T List<T>::getLast(){
    
    if (this->mySize > 0){
        Node<T> *temp = start;
        while (temp->next != nullptr){
            temp = temp->next;
        }
        return temp->value;
    } else {
        return T();
    }
}

//Return the value of the node at position j in the Linked List,
//If no first node, return the default constructed value: T()
template <class T>
T List<T>::getAt(int j){
    
    if (this->mySize == 0){
        return T();
    } else if (j > this->mySize){
        return T();
    } else if (j == 1){
        return this->getFirst();
    } else if (j == this->mySize){
        return this->getLast();
    } else {
        int count = 1;
        Node<T> *temp = start;
        while (count < j){
            temp = temp->next;
            ++count;
        }
        return temp->value;
    }
}

//Return the position of the (first) node whose value is equal to the key
//Otherwise, return -1
template <class T>
int List<T>::find(T key){
    
    if (this->mySize == 0){
        return -1;
    } else {
        int count = 1;
        Node<T> *temp = this->start;
        while (temp->value != key && temp->next != nullptr ){
            temp = temp->next;
            ++count;
        }
        
        if (temp->value == key){
            return count;
        } else {
            return -1;
        }
    }
}
