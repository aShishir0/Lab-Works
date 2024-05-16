#include "LinkedList.h"


LinkedList::LinkedList() : HEAD(nullptr), TAIL(nullptr) {}

bool LinkedList::isEmpty()
{
    if(HEAD == nullptr){
        std::cout<<"The list is empty"<<std::endl;
        return true;
    }
    else{
        return false;
    }
    
}

void LinkedList::add(Node *pred, int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = pred->next;
    pred->next = newNode;
}

void LinkedList::addToHead(int data)
{
    Node *newNode = new Node;
    if (!isEmpty())
    {
        newNode->data = data;
        newNode->next = HEAD;
        HEAD = newNode;
    }
    else
    {
        newNode->data = data;
        newNode->next = nullptr;
        HEAD = newNode;
        TAIL = HEAD;
    }
}

void LinkedList::addToTail(int data)
{
    Node *newNode = new Node;
    if (!isEmpty())
    {
        newNode->data = data;
        newNode->next = nullptr;
        TAIL->next = newNode;
        TAIL = newNode;
    }
    else
    {
        newNode->data = data;
        newNode->next = nullptr;
        TAIL = newNode;
        HEAD = TAIL;
    }
}

int LinkedList::removeFromHead()
{
    int data;
    if (!isEmpty())
    {
        Node *nodeToDelete = HEAD;
        data = HEAD->data;
        HEAD = HEAD->next;
        delete nodeToDelete;
        if (isEmpty())
        {
            TAIL = nullptr;
        }
        return data;
    }
    else
    {
        return -1;
    }
}

int LinkedList::removeFromTail()
{
    int data;
    if (isEmpty())
    {
        return -1;
    }

    if (HEAD == TAIL)
    {
        data = HEAD->data;
        delete HEAD;
        HEAD = TAIL = nullptr;
        return data;
    }

    else{
        Node *p = HEAD;
        Node *t = nullptr;
        while (p != TAIL)
        {
            t = p;
            p = p->next;
        }

        data = TAIL->data;
        delete TAIL;
        TAIL = t;
        TAIL->next = nullptr;
        return data;
    }
}

void LinkedList::Traverse()
{
    Node *p = HEAD;
    if (!isEmpty())
    {
        std::cout << "The contents of the list are :  ";
        while (p != NULL)
        {
            std::cout << p->data;
            std::cout << "  ";
            p = p->next;
        }
        std::cout<<std::endl;
    }
}

bool LinkedList::remove(int &data)
{
    if (isEmpty())
    {
        return false;
    }

    if (HEAD->data == data)
    {
        return removeFromHead();
    }

    Node *p = HEAD;
    Node *temp = nullptr;
    while (p->next != nullptr && p->data != data)
    {
        temp = p;
        p = p->next;
    }

    if (p->data == data)
    {
        if (p == TAIL)
        {
            return removeFromTail();
        }
        else
        {
            Node *nodeToDelete = p;
            temp->next = p->next;
            delete nodeToDelete;
            return true;
        }
    }

    return false;
}
