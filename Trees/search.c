#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

node* search(node* root, int data) {
    if (root == NULL || root->data == data)
        return root;
    if (data < root->data)
        return search(root->left, data);
    return search(root->right, data);
}
