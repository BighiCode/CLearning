#ifndef TREE_H
#define TREE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct NodeTREE
{
    int value;
    struct NodeTREE* left;
    struct NodeTREE* right;
}NodeTree;

NodeTree *createTree();                            // Initializes an empty tree
NodeTree *insertTree(NodeTree *root, int value);     // Inserts an element into the tree
NodeTree *removeNode(NodeTree *root, int value); // Removes an element from the tree
NodeTree *search(NodeTree *root, int value);     // Searches for an element in the tree
int getHeight(NodeTree *root);                     // Returns the tree height
void printInOrder(NodeTree *root);                 // Prints the tree in ascending order
void printPostOrder(NodeTree *root);               // Prints the tree in post-order
void destroyTree(NodeTree *root);                  // Frees memory of the tree

// 🔹 Tree Balancing Functions
NodeTree *balanceTree(NodeTree *root);             // Balances the tree

// 🔹 Visual Tree Printing Function
void printTree(NodeTree *root);           

#endif