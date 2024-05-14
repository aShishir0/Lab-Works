#include<iostream>
#ifndef STACK_H
#define STACK_H

class Istack{
    public:
        Istack() {};
        ~Istack() {};
        virtual void push(int) = 0;
        virtual int pop() = 0;
        virtual int top() = 0;
        virtual bool isEmpty() = 0;
};

#endif