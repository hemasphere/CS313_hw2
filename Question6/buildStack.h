//
// Created by Hema Muni on 5/3/21.
//
#pragma once

#ifndef HWTWO_BUILDSTACK_H
#define HWTWO_BUILDSTACK_H

#include <iostream>
#include <string>
#include <algorithm>

template <class T>
class stack{
    static const int cap = 100;
public:
    //constructors
    stack();
    stack(int n);
    //deconstructor
    ~stack();
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
    //operator[]
    T& operator[](int n);
private:
    T *arr;
    int stackTop;
    int _size;
};

template <typename T>
stack<T> :: stack(){
    arr = new T[_size];
    _size = cap;
    stackTop = -1;
}

template <typename T>
stack<T> :: stack(int n){
    n = cap;
    arr = new T[n];
    _size = n;
    stackTop = -1;
}

template <typename T>
stack<T> :: ~stack(){
    delete[] arr;
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

template <typename T>
T& stack<T> :: operator[](int n){
    return at(n);
}
#endif //HWTWO_BUILDSTACK_H
