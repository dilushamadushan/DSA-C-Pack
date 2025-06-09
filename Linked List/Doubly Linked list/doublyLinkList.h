#ifndef DOUBLYLINKLIST_H
#define DOUBLYLINKLIST_H

typedef struct node{
    int data;
    struct node* next;
    struct node* prev;
}node;

extern node *head;

struct node* createNode(int data);
struct node* createDoublyLinkedList(int n);
void displayDoublyLinkedList();
void insertAfterHead(int data);
void insertAtFront(int data);
void insertAtEnd(int data);
void insertAtPosition(int data,int position);
int deleteAfterHead();
int deleteFromFront();
int deleteFromEnd();
int deleteAtPosition(int position);
int countNodes();
int searchNode(int value);

#endif