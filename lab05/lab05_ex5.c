#include "FILA.h"
#include <stdio.h>
#include <stdlib.h>


void invertQueue (Fila * f) {
    Pilha * p;
    p = createStack();


    while(f->ini != NULL) {
        stackPush(p,RetiraFila(f));
    }
    while(p->Topo != NULL) {
        InsereFila(f,stackPop(p));
    }
}

int main () {

    Fila * f, *A, *B;
    int dados=1,recebe;
    f=CriaFila();
    A=CriaFila();
    B=CriaFila();

    while(dados >0) {
            printf("\nDado: ");
            scanf("%d",&dados);
            if (dados >0) {
                 InsereFila(f,dados);
            }
            imprimeFila(f);
    }
    invertQueue(f);
    printf("\n------------------------------------------");
    printf("\nInvertido: ");
    imprimeFila(f);
}
