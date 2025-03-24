#include "LAPI.h"
#include "QAPI.h"
#include "TAPI.h"

int main(){
    
    root = createTree();

    root = insertTree(root,2);
    root = insertTree(root,2);
    root = insertTree(root,2);
    root = insertTree(root,2);
    root = insertTree(root,2);

    printInOrder(root);

    return 0;
}
