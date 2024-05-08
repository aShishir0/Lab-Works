#include "stack.h"
#include "LinkedListStack.h"
#include "LinkedList.h"

void LinkedListStack :: push(int data){
    stack.addToHead(data);
}

int LinkedListStack :: pop(){
    stack.removeFromHead();
}

int LinkedListStack :: top(){
    return ;
}