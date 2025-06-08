#include <stdlib.h>
#include "linkedList.h"

extern struct node* head;

int deleteNodeAfterHead(){
    struct node *temp = head -> next;
    int deletedData = temp -> data;

    head -> next = temp -> next;
    free(temp);

    return deletedData;
}

int deleteNodeAtFront(){
    struct node *temp = head;
    int delNode = head -> data;

    head = head -> next;
    free(temp);

    return delNode;
}

int deleteNodeAtEnd(){
    struct node *temp = head;
    struct node * prev = NULL;

    if(head -> next == NULL){
        int delNode = head -> data;
        free(head);
        head = NULL;
        return delNode;
    }
    while (temp -> next != NULL){
        prev = temp;
        temp = temp -> next;
    }
    int delNode = temp -> data;
    free(temp);
    prev -> next = NULL;

    return delNode;
}
