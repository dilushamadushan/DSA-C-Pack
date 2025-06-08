#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct node {
    int data;
    struct node *next;
};

extern struct node* head;

void freeList(); 
struct node* createNode(int data);
struct node* createNodeList(int nodeCount);
void displayList();
void addNewNode(int data);
void insertAtFront(int data);
void insertAtEnd(int data);
void insertNodeAtMiddle(int data, int position);
int nodeCount();
int findElement(int num);
int deleteNodeAfterHead();
int deleteNodeAtFront();
int deleteNodeAtEnd();

#endif
