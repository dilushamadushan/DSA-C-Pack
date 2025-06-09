#include <stdio.h>
#include <stdlib.h>
#include "doublyLinkList.h"

node *head;

int countNodes() {
    int count = 0;
    node *temp = head;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    return count;
}

int searchNode(int value) {
    int position = 1;
    node *temp = head;

    while (temp != NULL) {
        if (temp->data == value) {
            return position;
        }
        temp = temp->next;
        position++;
    }

    return -1; 
}

struct node* createNode(int data){
    node *newNode = (struct node*)malloc(sizeof(struct node));
    if(newNode == NULL){
        printf("Memory allocation failed\n");
        exit(0);
    }
    newNode -> data = data;
    newNode -> prev = NULL;
    newNode -> next = NULL;
    return newNode;
}

struct node* createDoublyLinkedList(int n){
    node *temp = NULL, *newNode;
    int value;

    if(n <= 0){
        printf("Invalid number of node.\n");
        return NULL;
    }

    for(int i = 1; i <= n;i++){
        printf("Enter data for node %d : ", i);
        scanf("%d", &value);
        newNode = 	createNode(value);
        if(head == NULL){
            head = temp = newNode;
        }
        newNode -> prev = temp;
        temp -> next = newNode;
        temp = newNode;
    }
    return head;
}

void displayDoublyLinkedList(){
    node *temp = head;
    if(head == NULL){
        printf("The list is empty.\n");
        return;
    }
    while(temp != NULL){
        printf("%d ", temp -> data);
        temp = temp -> next;
    }
    printf("\n");
}
