#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

int height(node* root) {
    if (root == NULL)
        return -1; 
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    return (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;
}

int isBalanced(node* root) {
    if (root == NULL)
        return 1;

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    if (abs(leftHeight - rightHeight) > 1)
        return 0;

    return isBalanced(root->left) && isBalanced(root->right);
}


