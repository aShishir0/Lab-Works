#include "iStack.h"
#include "LinkedList.h"
#include <iostream>

LinkedListStack::LinkedListStack() {}
LinkedListStack::~LinkedListStack() {}

bool LinkedListStack::isEmpty()
{
    if (list.isEmpty())
    {

        return true;
    }
    else
        return false;
}

bool LinkedListStack::push(int data)
{
    list.addToHead(data);
}

void LinkedListStack::pop(int &data)
{
    if (!isEmpty())
    {
        list.removeFromHead(data);
    }
    else
        std::cout << "The Stack is empty \n";
}

void LinkedListStack::top(int &data)
{
    if (!isEmpty())
    {
        list.HeadReturn(data);
    }
}

void LinkedListStack::traverse()
{
    if (!isEmpty())
    {
        
        list.Traverse();
    
    }
    else
        std::cout << "The Stack is empty";
}

