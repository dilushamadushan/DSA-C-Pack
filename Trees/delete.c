#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

node* findMin(node* root){
    while(root -> left != NULL){
        root = root -> left;
    }
    return root;
}

node* delete(node* t_node, int data) {
    if (t_node == NULL)
        return NULL;

    if (data < t_node->data)
        t_node->left = delete(t_node->left, data);
    else if (data > t_node->data)
        t_node->right = delete(t_node->right, data);
    else {
        if (t_node->left == NULL) {
            node* temp = t_node->right;
            free(t_node);
            return temp;
        } else if (t_node->right == NULL) {
            node* temp = t_node->left;
            free(t_node);
            return temp;
        }
        node* temp = findMin(t_node->right);
        t_node->data = temp->data;
        t_node->right = delete(t_node->right, temp->data);
    }
    return t_node;
}