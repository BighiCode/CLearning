#include "Tree.h"

NodeTree *createTree(){

    NodeTree *root = malloc(sizeof(NodeTree));

    root->left = NULL;
    root->right = NULL;

    return root;
} 