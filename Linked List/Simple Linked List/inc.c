#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

extern struct node* head;

struct node* createNode(int data){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1); 
    }
    newNode -> data = data;
    newNode -> next = NULL;
    return newNode;
}

struct node* createNodeList(int nodeCount){
    int i, num;
    struct node *temp = NULL, *newNode;

    for (i = 1; i <= nodeCount ; i++){
        printf("Enter the data for node %d : ", i);
        scanf("%d", &num);
        newNode = createNode(num);
        if(!head){
            head = temp = newNode;
        }
        temp = temp -> next = newNode;
    }
    printf("\n");
    return head;
}

void displayList(){
    struct node* temp = head;
    if(head == NULL){
        printf("List is empty\n");
        return;
    }
    while(temp){
        printf("%d ", temp -> data);
        temp = temp -> next;
    }
    printf("\n\n");
}

int nodeCount(){
    int count = 0;
    struct node *temp = head;
    while(temp != NULL){
        count++;
        temp = temp -> next;
    }
    return count; 
}

int findElement(int num){
    struct node *temp = head;
    while(temp != NULL){
        if(temp -> data == num) 
            return 1;
        temp =  temp -> next;
    }
    return 0;
}

void freeList(){
    struct node *temp;
    while (head){
        temp = head;
        head = head->next;
        free(temp);
    }
}