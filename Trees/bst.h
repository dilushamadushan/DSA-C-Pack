#ifndef BST_H
#define BST_H

typedef struct node {
    int data;
    struct node* left;
    struct node* right;
} node;

node* newNode(int data);
node* insert(node* root, int data);
void inOrder(node* root);
void preOrder(node* root);
void postOrder(node* root);
void printLevelOrder(node* root);
node* findMin(node* root);
node* delete(node* root, int data);
node* search(node* root, int data);
int height(node* root);
int isBalanced(node* root);

#endif
