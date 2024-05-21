#include "IQueue.h"
#include<iostream>

int main()
{
    IQueue *Queue = new LinkedListQueue;
    int data;
    Queue->enQueue(5);
    Queue->enQueue(6);
    Queue->enQueue(7);
    Queue->traverse();
    Queue->deQueue(data);
    std::cout<<"\nThe deQueued data is : "<<data<<std::endl;
    Queue->traverse();
}