#include<iostream>
#include "iStack.h"
using namespace std;

int main()
{
    Istack *Stack = new ArrayStack(5);
    int data;
    if (Stack->isEmpty())
    {
        cout << "The stack is Empty"<<endl;
    }
    Stack->push(2);
    Stack->push(6);
    Stack->push(3);
    Stack->push(8);
    Stack->pop(data);
    cout << "The removed data is " << data << endl;
    Stack->top(data);
    cout << "The data  at the top is" << data<<endl;
    Stack->traverse();
}