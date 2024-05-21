#include<iostream>
#include "iStack.h"
using namespace std;

int main()
{
    Istack *Stack = new LinkedListStack;
    int data;
    if (Stack->isEmpty())
    {
        cout << "The stack is Empty"<<endl;
    }
    Stack->push(5);
    Stack->push(6);
    Stack->push(7);
    Stack->push(8);
    Stack->pop(data);
    cout << "The removed data is " << data << endl;
    Stack->top(data);
    cout << "The data  at the top is \n" << data;
    Stack->traverse();
}