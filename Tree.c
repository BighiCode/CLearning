#include "Tree.h"

NodeTree *createTree(){

    NodeTree *root = malloc(sizeof(NodeTree));

    root->left = NULL;
    root->right = NULL;
    root->value = 0;
    
    return root;
}

NodeTree *insertTree(NodeTree *root, int value){
    if(root->value <= 0){
        root->value = value;
        return root;
    }else if (value > root->value)
    {
        insertTree(root->right,value);
    }else{
        insertTree(root->left,value);
    }
    
}

void printInOrder(NodeTree* root) {
    if (root != NULL) {
        printInOrder(root->left);  // Visita a subárvore esquerda
        printf("%d ", root->value);  // Visita a raiz
        printInOrder(root->right);  // Visita a subárvore direita
    }
}