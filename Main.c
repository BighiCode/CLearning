#include "LinkedList/API.h"
#include "Tree/Tree.h"
#include "Pile/Pile.h"

int main(){

    headOfTheList = CreateList();

    Lnode *no = CreateNode(2);

    InsertNodeInTheList(&headOfTheList,no);

    printf("\n%d", IsEmpty(headOfTheList));

    printf("\n%d", SearchElementNode(headOfTheList,2)->value);

    return 0;
}