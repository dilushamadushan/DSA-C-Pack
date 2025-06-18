#include <stdio.h>
#include <stdlib.h>
#include "doublyLinkList.h"

node *head;

int deleteAfterHead(){
    if (head == NULL || head->next == NULL) {
        printf("No node exists after head to delete.\n");
        return -1;
    }

    node *temp = head -> next;
    int delNode = temp -> data;

    head -> next = temp -> next;

    if(temp -> next != NULL){
        temp -> next -> prev = head;
    }
    
    free(temp);

    return delNode;
}

int deleteFromFront() {
    if (head == NULL) {
        printf("List is empty.\n");
        return -1;
    }

    node *temp = head;
    int delData = temp->data;

    head = head->next;
    if (head != NULL)
        head->prev = NULL;

    free(temp);
    return delData;
}

int deleteFromEnd() {
    if (head == NULL) {
        printf("List is empty.\n");
        return -1;
    }

    node *temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    int delData = temp->data;

    if (temp->prev != NULL) {
        temp->prev->next = NULL;
    } else {
        
        head = NULL;
    }

    free(temp);
    return delData;
}

int deleteAtPosition(int position) {
    if (head == NULL || position < 1) {
        printf("Invalid position or list is empty.\n");
        return -1;
    }

    if (position == 1)
        return deleteFromFront();

    node *temp = head;

    for (int i = 1; i < position && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of range.\n");
        return -1;
    }

    int delData = temp->data;

    if (temp->prev != NULL)
        temp->prev->next = temp->next;

    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    free(temp);
    return delData;
}