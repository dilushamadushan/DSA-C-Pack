#include <stdlib.h>
#include <stdio.h>
#include "linkedList.h"

extern struct node* head;

void addNewNode(int data){
    struct node *newNode = createNode(data);
    newNode -> next = head -> next;
    head -> next = newNode;
}

void insertAtFront(int data){
    struct node* newNode = createNode(data);
    newNode -> next = head;
    head = newNode;
}

void insertAtEnd(int data){
    struct node *newNode = createNode(data);
    struct node *temp = head;

    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = newNode;
}

void insertNodeAtMiddle(int data, int position){
    int i;
    struct node *newNode, *temp;

    if(position == 1){
        insertAtFront(data);
        return;
    }
    
    newNode = createNode(data);
    temp = head;

    for(i = 1; i < position - 1 ; i++){
        temp = temp -> next;
        if(temp == NULL) break;
    }

    if(temp == NULL){
        printf("Position out of range\n");
        free(newNode);
        return;
    }
    
    newNode -> next = temp -> next;
    temp -> next = newNode;
}
