#include "LinkedListStack.h"

void LinkedListStack :: push(int data){
    stack.addToHead(data);
}

int LinkedListStack :: pop(){
    return stack.removeFromHead();
}

bool LinkedListStack :: isEmpty(){
    return stack.isEmpty();
}
int LinkedListStack :: top(){
    if (!isEmpty()){
        return (stack.HEAD)->data;
    }
    return -1;
}