//
// Created by Hema Muni on 5/3/21.
//
#pragma once

#ifndef HWTWO_REVERSESTACK_H
#define HWTWO_REVERSESTACK_H

#include <iostream>
#include <string>
#include <algorithm>
#include "buildStack.h"

using namespace std;

void reverseStack(string &str){
    stack<char> s;
    for (int i = 0; i < str.length(); i++) {
        char character = str.at(i);
        if(character == ' '){
            while (!s.isEmptyStack()) {
                std:: cout << s.top();
                s.pop();
            }
            std:: cout << " ";
        }
        else{
            s.push(character);
        }
    }
    
    while (!s.isEmptyStack()) {
        std:: cout << s.top();
        s.pop();
    }
}

#endif //HWTWO_REVERSESTACK_H
