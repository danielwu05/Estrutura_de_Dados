#include "Pilhas.h"
#include <stdio.h>
#include <stdlib.h>


void sortInsert (Pilha* p, int data) {


    Pilha * a;

    a = createStack();

    if (p->Topo == NULL) {
        stackPush(p,data);
        return;
    }


    while (p->Topo != NULL && data > p -> Topo ->data) {
        stackPush(a,stackPop(p));

    }


    stackPush(p,data);

    while (a->Topo != NULL) {

        stackPush(p,stackPop(a));
    }

}


 int main()
 {
     Pilha * P;
     int dados=1;
     P=createStack();


    while (dados>0) {
        printf("\nDigite o valor: ");
         scanf("%d", &dados);
         sortInsert(P,dados);
         printList(P);
    }

 }

