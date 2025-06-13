#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

int main(){
    // gcc mainBst.c insert.c delete.c search.c traversal.c utils.c -o bst
    // ./bst
    node* t_node = NULL;
    int n, value, i, s, d;

    printf("Enter Number of Nodes: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("Enter Node %d value : ", i + 1);
        scanf("%d", &value);
        t_node = insert(t_node, value);
    }

    printf("\nInorder Traverseal: ");
    inOrder(t_node);
    printf("\n");

    printf("\nPostorder Traverseal: ");
    postOrder(t_node);
    printf("\n");

    printf("\nPreorder Traverseal: ");
    preOrder(t_node);
    printf("\n\n");

    printf("Enter value for search : ");
    scanf("%d", &s);
    node *result = search(t_node, s);
    if(result != NULL){
        printf("Node with value %d found.\n\n", s);
    }else{
        printf("Node with value %d not found.\n\n", s);
    }

    printf("Enter value for delete : ");
    scanf("%d", &d);
    t_node = delete(t_node, d);
    printf("In-Order after deletion : ");
    inOrder(t_node);
    printf("\n");

    printf("\nHeight of tree: %d\n", height(t_node));
    printf("Is tree balanced ? %s\n", isBalanced(t_node) ? "Yes" : "No");

    printf("Level Order Traversal: ");
    printLevelOrder(t_node);
    printf("\n");


    return 0;
}