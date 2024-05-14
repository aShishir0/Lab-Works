#include "LinkedListStack.h"

void LinkedListStack :: push(int data){
    stack.addToHead(data);
}

int LinkedListStack :: pop(){
    stack.removeFromHead();
}

bool LinkedListStack :: isEmpty(){
    stack.isEmpty();
}
int LinkedListStack :: top(){
    std::cout<<stack.HEAD->data;
}