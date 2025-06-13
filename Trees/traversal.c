#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

void inOrder(node* root){
    if(root){
        inOrder(root -> left);
        printf("%d ", root -> data);
        inOrder(root -> right);
    }
}

void postOrder(node* root){
    if(root){
        postOrder(root -> left);
        postOrder(root -> right);
        printf("%d ", root -> data);
    }
}

void preOrder(node* root){
    if(root){
        printf("%d ", root -> data);
        preOrder(root -> left);
        preOrder(root -> right);
    }
}

void printLevelOrder(node* root) {
    if (root == NULL) return;

    node* queue[100];
    int front = 0, rear = 0;

    queue[rear++] = root;

    while (front < rear) {
        node* current = queue[front++];
        printf("%d ", current->data);

        if (current->left != NULL)
            queue[rear++] = current->left;
        if (current->right != NULL)
            queue[rear++] = current->right;
    }
}
