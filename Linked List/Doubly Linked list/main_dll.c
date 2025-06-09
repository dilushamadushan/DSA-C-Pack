#include <stdio.h>
#include <stdlib.h>
#include "doublyLinkList.h"

node *head;

int main(){
    //gcc main_dll.c inc_dll.c  insert_dll.c delete_dll.c  -o pro
    //.pro
    int n;

    printf("Enter the number of nodes to create: ");
    scanf("%d", &n);
    createDoublyLinkedList(n);

    printf("\nDoubly Linked List after creation:\n");
    displayDoublyLinkedList();

    printf("\nInserting 100 after head...\n");
    insertAfterHead(100);
    displayDoublyLinkedList();

    printf("\nInserting 200 at the front...\n");
    insertAtFront(200);
    displayDoublyLinkedList();

    printf("\nInserting 300 at the end...\n");
    insertAtEnd(300);
    displayDoublyLinkedList();

    printf("\nInserting 400 at position 3...\n");
    insertAtPosition(400, 3);
    displayDoublyLinkedList();

    printf("\nDeleting node after head...\n");
    deleteAfterHead();
    displayDoublyLinkedList();

    printf("\nDeleting front node...\n");
    deleteFromFront();
    displayDoublyLinkedList();

    printf("\nDeleting end node...\n");
    deleteFromEnd();
    displayDoublyLinkedList();

    printf("\nDeleting node at position 3...\n");
    deleteAtPosition(3);
    displayDoublyLinkedList();

    int total = countNodes();
    printf("\nTotal number of nodes: %d\n", total);

    int searchVal = 100;
    int pos = searchNode(searchVal);
    if (pos != -1)
        printf("Value %d found at position: %d\n", searchVal, pos);
    else
        printf("Value %d not found in the list.\n", searchVal);


    return 0;
}