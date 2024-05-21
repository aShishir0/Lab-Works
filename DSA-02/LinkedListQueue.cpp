#include "IQueue.h"
#include "LinkedList.h"
#include <iostream>


bool LinkedListQueue::isEmpty()
{
   if(list.isEmpty())
   {
    return true;
   }
   else 
   return false;
}

void LinkedListQueue::enQueue(int element)
{
   
    
        list.addToTail(element);
    


}

void LinkedListQueue::deQueue(int &element)
{
    if(!isEmpty())
    {
        list.removeFromHead(element);
    }
}

void LinkedListQueue::front(int &element)
{
    list.HeadReturn(element);
    
}

void LinkedListQueue::rear(int &element)
{
    list.TailReturn(element);
}



void LinkedListQueue::traverse()
{
    list.Traverse();
}

