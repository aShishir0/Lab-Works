#include "stack.h"
#include "LinkedList.h"

#ifndef LINKEDLISTSTACK_H
#define LINKEDLISTSTACK_H

class LinkedListStack : public Istack{
    protected:
        LinkedList stack;
    public:
        void push(int);
        int pop();
        int top();
        bool isEmpty();
};

#endif