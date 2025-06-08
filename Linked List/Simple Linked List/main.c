#include <stdio.h>
#include "linkedList.h"

struct node* head = NULL;

int main(){
    //gcc main.c inc.c  insert.c delete.c  -o program
    //./program

    int n;
    createNodeList(3);

    printf("Linked List\n");
    displayList();

    printf("Insert new node\n");
    addNewNode(200);
    displayList();
    
    printf("Insert new node at front\n");
    insertAtFront(100);
    displayList();    
    
    printf("Insert new node to end\n");
    insertAtEnd(300);
    displayList();
    
    printf("Insert new node to middle\n");
    insertNodeAtMiddle(250,4);
    displayList();
    
    printf("Delete Node after Head\n");
    deleteNodeAfterHead();
    displayList();
    
    printf("Delete Front node\n");
    deleteNodeAtFront();
    displayList();
    
    printf("Delete End node\n");
    deleteNodeAtEnd();
    displayList();
    
    printf("Node Count : %d\n\n", nodeCount());
    
    printf("Enter element to found : ");
    scanf("%d", &n);
    (findElement(n)) ? printf("Element found in list\n\n") : printf("Element not found in list\n\n");
    
    freeList();
    return 0;
}