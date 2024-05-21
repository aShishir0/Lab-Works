#include "IQueue.h"
#include<iostream>

int main()
{
    IQueue *Queue = new ArrayQueue(5);
    int data;
    Queue->enQueue(2);
    Queue->enQueue(6);
    Queue->front(data);
    std::cout<<"The data at front is : "<<data<<std::endl;
    Queue->enQueue(9);
    Queue->traverse();
    Queue->deQueue(data);
    std::cout<<"\nThe deQueued data is : "<<data<<std::endl;
    Queue->traverse();
}