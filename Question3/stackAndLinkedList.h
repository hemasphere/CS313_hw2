//
// Created by Hema Muni on 5/6/21.
//
#pragma once

#ifndef HWTWO_STACKANDLINKEDLIST_H
#define HWTWO_STACKANDLINKEDLIST_H
#include <iostream>
#include <string>
#include <algorithm>

template <class T>
class stack{
    static const int cap = 1000000;
public:
    //constructors
    stack();
    stack(int n);
    //size
    int size() const;
    //push fc
    void push(const T& a);
    //pop fc
    void pop();
    //top fc
    T top() const;
    //isEmpty fc
    bool isEmptyStack() const;
    //isFull fc
    bool isFullStack() const;
    //at
    T& at(int n);

private:
    T *arr;
    int stackTop;
    int _size;
};

template <typename T>
stack<T> :: stack(){
    _size = cap;
    arr = new T[cap];
    stackTop = -1;
}

template <typename T>
stack<T> :: stack(int n){
    _size = n;
    arr = new T[_size];
    stackTop = -1;
}

template <typename T>
int stack<T> :: size() const{
    return stackTop + 1;
}

template <typename T>
void stack<T> :: push(const T& a){
    if(size() == cap)
        std:: cout << "Full stack, can't insert no more";
    arr[++stackTop] = a;
}

template <typename T>
void stack<T> :: pop(){
    // check for stack underflow
    if (isEmptyStack()) {
        std:: cout << "Empty stack, nothing to delete";
    }
    // decrease stack size by 1
    --stackTop;
}

template <typename T>
T stack<T>:: top() const {
    if (isEmptyStack())
        std:: cout << "error, empty stack";

    return arr[stackTop];
}

template <typename T>
bool stack<T>:: isEmptyStack() const {
    return(stackTop < 0);
}

template <typename T>
bool stack<T>:: isFullStack() const{
    return size() >= cap;
}

template<typename T>
T& stack<T> :: at(int n) {
    if (n >= 0 && n < _size) {
        //we use this so we can pinpoint certain places in the code
        return arr[n];
    } else {
        T *pnull = NULL;
        return *pnull;
    }
}

//creating a templated class
template <class Type>
//this is for nodes used in linked list
struct nodeType
{
    //we have a type which will be the info stored
    Type info;
    // the node type will have a pointer link
    nodeType<Type> *link;
};

//creating a templated class
template <class Type>
//this is for linked list stack and its being dervived from stackADT?
class linkedStackType
{
//public functions
public:
    //operator equal function
    const linkedStackType<Type>& operator=(const linkedStackType<Type>&);

    //this function checks if the stack is empty and is const
    bool isEmptyStack() const;

    //this function checks if the stack is full and is const
    bool isFullStack() const;

    //this function initializes the stack
    void initializeStack();

    //this function pushes an item into the stack and takes in
    //newItem as a parameter
    void push(const Type& newItem);

    //this function finds the top (or last) element
    Type top() const;

    //this function pops (or deleted) the last element of the stack
    void pop();

    //this is a constructor
    linkedStackType();

    //this constructor is the copy constructor
    //and will copy elements into it
    linkedStackType(const linkedStackType<Type>& otherStack);

    //this is a deconstructor
    ~linkedStackType();

//private functions
private:
    nodeType<Type> *stackTop; //pointer to the stack

    //this functions copies to other functions
    void copyStack(const linkedStackType<Type>& otherStack);

};

//creating a new templated class
template <class Type>
//this is dervived from linkedStackType
linkedStackType<Type>::linkedStackType()
{
    //makes the top element a nullptr
    stackTop = nullptr;
}

//creating a new templated class
template <class Type>
//boolean function that is derived from isEmptyStack
bool linkedStackType<Type>::isEmptyStack() const
{
    //returns if the top of the stack is a nullptr
    //in other words, empty
    return(stackTop == nullptr);
}

//creating a new templated class
template <class Type>
//boolean function that is derived from isFullStack
bool linkedStackType<Type>:: isFullStack() const
{
    //returns false if it is not full
    return false;
}

//creating a new templated class
template <class Type>
//void function that is derived from initializeStack
void linkedStackType<Type>:: initializeStack()
{
    //initializes a temp pointer
    nodeType<Type> *temp;

    //while loop
    //while the stack is not empty
    while (stackTop != nullptr)
    {
        //a temp variable will be the element in the last element of the stack
        //or the top of the stack
        temp = stackTop;

        //the stackTop is equal to the address (or the link)
        stackTop = stackTop->link;

        //we delete the variable for no memory leakage
        delete temp;
    }
}

//creating a new templated class
template <class Type>
//void function that is derived from push
void linkedStackType<Type>::push(const Type& newElement)
{
    //initializes a newNode pointer
    nodeType<Type> *newNode;

    //newNode equals a new nodeType
    newNode = new nodeType<Type>;

    //the info in the new Node is now in newElement
    newNode->info = newElement;
    //the link to that element is now equal to stackTop
    newNode->link = stackTop;
    //stackTop is now equal to newNode
    stackTop = newNode;

} //end push

//creating a new templated class
template <class Type>
//Type function that is derived from top
Type linkedStackType<Type>::top() const
{
    //we assume the stackTop is not empty/nullptr
    assert(stackTop != nullptr);

    //returns the info in stackTop
    return stackTop->info;
}//end top

//creating a new templated class
template <class Type>
//void function that is derived from pop
void linkedStackType<Type>::pop()
{
    //initializes a temp pointer
    nodeType<Type> *temp;

    //if the stackTop is not equal to nullptr
    //or not empty
    if (stackTop != nullptr)
    {
        //temp is equal tp stackTop
        temp = stackTop;

        //the stackTop is now equal to the link of stackTop
        stackTop = stackTop->link;

        //we delete temp to not have a memory leak
        delete temp;
    }

        //else statement
    else
        //print out "Cannot remove from an empty stack."
        std:: cout << "Cannot remove from an empty stack." << std:: endl;
}//end pop

//creating a new templated class
template <class Type>
//void function that is derived from copyStack
void linkedStackType<Type>::copyStack
        (const linkedStackType<Type>& otherStack)
{
    //initializes a newNode, current and last pointer
    nodeType<Type> *newNode, *current, *last;

    //checks to see if the stack is emtpty
    if (stackTop != nullptr)
        //if not, it will call initializeStack()
        initializeStack();

    //checks to see if the other stacks are empty
    if (otherStack.stackTop == nullptr)
        //if so, the stackTop is equal to nullptr
        stackTop = nullptr;
        //else statements
    else
    {
        //current ptr is equal to otherStack last element (or stackTop)
        current = otherStack.stackTop;

        //stackTop equals a new nodeType of whatever type
        stackTop = new nodeType<Type>;

        //this is copying current info into stackTop info
        stackTop->info = current->info;
        //stackTop link is now nullptr
        stackTop->link = nullptr;

        //last equals stackTop
        last = stackTop;
        //current equals it's link
        current = current->link;

        //while statement
        //while current is not a nullptr
        while (current != nullptr)
        {
            //newNode is now a new nodeType with whatever type
            newNode = new nodeType<Type>;

            //copys current info into newNode info
            newNode->info = current->info;
            //newNode link is now a nullptr
            newNode->link = nullptr;
            //last link is newNode
            last->link = newNode;
            //last equals newNode
            last = newNode;
            //current equals current link
            current = current->link;
        }
    }
}

//creating a new templated class
template <class Type>
//constructor that is derived from copy constructor linkedStackType
linkedStackType<Type>::linkedStackType(
        const linkedStackType<Type>& otherStack)
{
    //stackTop is nullptr
    stackTop = nullptr;
    //copy function with parameter otherStack
    copyStack(otherStack);
}

//creating a new templated class
template <class Type>
//constructor that is derived from the deconstructor ~linkedStackType()
linkedStackType<Type>::~linkedStackType()
{
    //calls initializeStack();
    initializeStack();
}

//creating a new templated class
template <class Type>
//constructor that is derived from the operator equals
const linkedStackType<Type>& linkedStackType<Type>::operator=
        (const linkedStackType<Type>& otherStack)
{
    //if this is not equal to otherStack
    if (this != &otherStack)
        //we copy the information over
        copyStack(otherStack);

    //return this
    return *this;
}

int generateRand() {
    //randomizes the numbers
    int randNums = rand() % 52;
    return randNums;
}


template <typename T>
void BuildStack(const int size, stack<T> stack) {
    //fills in with random numbers
    int tempStack;
    for(int i = 0; i < size; i++){
        tempStack = generateRand();
        stack.push(tempStack);
    }
}

template <typename T>
void BuildList(const int size, linkedStackType<T> list){
    //fills in with random numbers
    for(int i = 0; i < size; i++){
        int tempList = generateRand();
        list.push(tempList);
    }
}
#endif //HWTWO_STACKANDLINKEDLIST_H
