#include "linkedlist.h"
#include <iostream>

Node::Node(int data){
    this->data = data;
    next = nullptr;
}
Linkedlist :: Linkedlist(){
    head = nullptr;
    tail = nullptr;
}
void Linkedlist ::add_to_head(int data){
    Node *new_node = new Node(data);
    new_node->data = data;
    new_node->next = head;
    head = n;
    if(tail == NULL){
        tail = new_node;
    }
}
void Linkedlist ::add_to_tail(int data){
    Node *new_node = new Node(data);
    new_node->data = data;
    if(tail != NULL){
        tail->next = new_node;
    }
    tail = new_node;
    if(head == NULL){
        head = new_node;
    }
}
bool Linkedlist :: isEmpty(){
    return head == NULL;
}
void Linkedlist :: traverse(){
    Node *p = head;
    while(p!= NULL){
        cout<<p->info<<endl;
        p = p->next;
    }
}
void Linkedlist :: remove_from_tail(){
    if(!isEmpty){
        Node *node_to_delete = tail;
        if(head == tail){
            head == NULL;
            tail == NULL;
        }
        else{
            Node * pred = head;
            while(pred->next!= tail){
                pred = pred->next;
            }
            tail = pred;
            pred->next = NULL;
        }
        delete node_to_delete;
    }
}

