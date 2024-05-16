#include <iostream>
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class Node
{
public:
    int data;
    Node *next;

    Node() {}
    Node(int d) : data(d), next(nullptr) {}
    Node(int d, Node *next) : data(d), next(next) {}
};

class LinkedList
{
public:
    Node *HEAD;
    Node *TAIL;

public:
    LinkedList();
    ~LinkedList(){}

    void add(Node *pred, int data);
    void addToHead(int data);
    void addToTail(int data);
    void Traverse();
    bool remove(int &data);
    int removeFromHead();
    int removeFromTail();
    bool isEmpty();
};

#endif