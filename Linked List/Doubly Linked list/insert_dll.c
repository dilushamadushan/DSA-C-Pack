#include <stdio.h>
#include <stdlib.h>
#include "doublyLinkList.h"

node *head;

void insertAfterHead(int data){
    node *newNode = createNode(data);
    node *temp = head;

    newNode -> prev = temp;
    newNode -> next = temp -> next;
    if(temp -> next != NULL){
        newNode -> next -> prev = newNode;
    }
    temp -> next = newNode;
}

void insertAtFront(int data){
    node *newNode = createNode(data);
    newNode -> next = head;
    head -> prev = newNode;
    head = newNode;
}

void insertAtEnd(int data){
    node *newNode = 	createNode(data);
    node *temp = head;

    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = newNode;
    newNode -> prev = temp;
}

void insertAtPosition(int data,int position){

    if (position < 1) {
        printf("Invalid position.\n");
        return;
    }

    if(position == 1){
        insertAtFront(data);
        return;
    }
    
    node *newNode = createNode(data);
    node *temp = head;

    for(int i = 1; i < position -1 ;i++){
        temp  = temp -> next;
        if(temp -> next == NULL) break;
    }
    if(temp == NULL){
        printf("Position out of range\n");
        free(newNode);
        return;
    }
    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next != NULL) {
        temp->next->prev = newNode;
    }

    temp->next = newNode;
}