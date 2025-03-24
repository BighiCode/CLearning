#include "LAPI.h"
#include "QAPI.h"

int main(){
    
    queue = malloc(sizeof(Queue));
    Inicialize(queue);
    
    for(int i = 0; i<10; i ++){
        Enqueue(queue,i);
    }

    //DestructQueue(queue);

    PrintAllElements(queue);

    return 0;
}
