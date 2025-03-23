#include "LinkedList/API.h"
#include "Tree/Tree.h"
#include "Pile/Pile.h"

int main(){

    headOfTheList = CreateList();

    Lnode *no1 = CreateNode(1);
    Lnode *no2 = CreateNode(2);
    Lnode *no3 = CreateNode(3);

    InsertNodeInTheList(&headOfTheList,no1);
    InsertNodeInTheList(&headOfTheList,no2);
    InsertNodeInTheList(&headOfTheList,no3);

    printf("\n%d", IsEmpty(headOfTheList));

    printf("\n%d", SearchElementNode(headOfTheList,3)->value);

    printf("\n%d", SearchElementNodeByPosition(headOfTheList,4)->value);

    return 0;
}