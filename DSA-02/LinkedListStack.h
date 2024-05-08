#include "stack.h"
#include "LinkedList.h"

class LinkedListStack : public Istack{
    protected:
        LinkedList stack;
    public:
        void push(int);
        int pop();
        int top();
        bool isEmpty();
};