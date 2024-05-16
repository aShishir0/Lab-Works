#include<iostream>
#include "LinkedListStack.h"
using namespace std;

int main(){
    Istack *st = new LinkedListStack;
    st->push(1);
    st->pop();
    st->isEmpty();
    st->push(2);
    st->push(3);
    st->push(4);
    st->top();

}