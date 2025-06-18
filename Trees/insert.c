#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

node* newNode(int data){
    node *temp = (node *)malloc(sizeof(node));
     if (!temp) {
        printf("Memory allocation failed\n");
        return NULL;
    }
    temp -> data = data;
    temp -> left = temp -> right = NULL;
    return temp;
}

node* insert(node* t_node, int data){
    if(t_node == NULL) return newNode(data);

    if(data < t_node -> data){
        t_node -> left = insert(t_node -> left,data);
    }else if(data > t_node -> data){
        t_node -> right = insert(t_node -> right, data);
    }
    return t_node;
}