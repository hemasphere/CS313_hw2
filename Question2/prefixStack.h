//
// Created by Hema Muni on 5/3/21.
//
#pragma once

#ifndef HWTWO_PREFIXSTACK_H
#define HWTWO_PREFIXSTACK_H

#include <iostream>
#include <string>
#include <algorithm>
#include "buildStack.h"

double prefixStack(std:: string str){

    stack<double> newStack;
    //for loop to go through the stack
    for(int i = str.size()-1; i >= 0; i--){
        if(isdigit(str[i]))
            newStack.push(str[i]-'0');
        else{
            //instantiating two double variables, op1 and op2
            double op1 = newStack.top();
            newStack.pop();
            double op2 = newStack.top();
            newStack.pop();

            //checking the expressions
            switch(str[i]){
                //if ch is equal to plus sign
                case '+':
                    //push (insert) the sum of op1 and op2
                    newStack.push(op1 + op2);
                    break;
                    //if ch is equal to minus sign
                case '-':
                    //push (insert) the difference of op1 and op2
                    newStack.push(op1 - op2);
                    break;
                    //if ch is equal to asterisk
                case '*':
                    //push (insert) the product of op1 and op2
                    newStack.push(op1 * op2);
                    break;
                    //if ch is equal to  backslash
                case '/':
                    //checks to see is op2 is not 0
                    if (op2 != 0)
                        //if not 0
                        //push (insert) the quotient of op1 and op2
                        newStack.push(op1 / op2);
                        //if it is equal to 0
                    else
                    {
                        newStack.push(op1 / op2);
                        //output " (Division by 0)"
                        std:: cout << " (Division by 0)";
                    }
                    break;
            }
        }
    }
    return newStack.top();
}
#endif //HWTWO_PREFIXSTACK_H
