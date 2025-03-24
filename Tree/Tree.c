#include "Tree.h"

NodeTree *createTree(){
    return NULL;
}
NodeTree *insertTree(NodeTree *root, int value){

    if(root == NULL){
        root = createTree();
        root->value = value;    
    }else if(value < root->value){
        root->left = insertTree(root->left, value);
    }else if(value > root->value){
        root->right = insertTree(root->right, value);
    }
}
/**Ordem de visitação
1️⃣ Percorre a subárvore esquerda
2️⃣ Visita a raiz
3️⃣ Percorre a subárvore direita 
**/
void printInOrder(NodeTree* root) {
    if (root != NULL) {
        printInOrder(root->left);  // Visita a subárvore esquerda
        printf("%d ", root->value);  // Visita a raiz
        printInOrder(root->right);  // Visita a subárvore direita
    }
}
/**
 * Ordem de visitação
1️⃣ Percorre a subárvore esquerda
2️⃣ Percorre a subárvore direita
3️⃣ Visita a raiz
 */
void printPostOrder(NodeTree* root) {
    if (root != NULL) {
        printPostOrder(root->left);  // Visita a subárvore esquerda
        printPostOrder(root->right);  // Visita a subárvore direita
        printf("%d ", root->value);  // Visita a raiz
    }
}

void destroyTree(NodeTree* root) {
    if (root != NULL) {
        destroyTree(root->left);  // Libera a subárvore esquerda
        destroyTree(root->right);  // Libera a subárvore direita
        free(root);  // Libera a raiz
    }
}
NodeTree *search(NodeTree *root, int value){

    if(root == NULL){
        return NULL;
    }else if(value < root->value){
        return search(root->left, value);
    }else if(value > root->value){
        return search(root->right, value);
    }
}

NodeTree *removeNode(NodeTree *root, int value){

    if(root == NULL){
        return NULL;
    }else if(value < root->value){
        root->left = removeNode(root->left, value);
    }else if(value > root->value){
        root->right = removeNode(root->right, value);
    }else{
        if(root->left == NULL && root->right == NULL){
            free(root);
            return NULL;
        }else if(root->left == NULL){
            NodeTree *temp = root->right;
            free(root);
            return temp;
        }else if(root->right == NULL){
            NodeTree *temp = root->left;
            free(root);
            return temp;
        }else{
            NodeTree *temp = root->right;
            while(temp->left != NULL){
                temp = temp->left;
            }
            root->value = temp->value;
            root->right = removeNode(root->right, temp->value);
        }
    }
}

int getHeight(NodeTree* root) {
    if (root == NULL) {
        return 0;
    }
    int leftHeight = getHeight(root->left);
    int rightHeight = getHeight(root->right);
    return 1 + (leftHeight > rightHeight ? leftHeight : rightHeight);
}