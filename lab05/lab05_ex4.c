#include "FILA.h"
#include <stdio.h>
#include <stdlib.h>


void createQueue (Fila * f,Fila * even, Fila* odd) {

    Nos * aux;
    aux = f-> ini;

    while(aux != NULL) {
        if (aux->info %2 ==0){
            InsereFila(even,aux->info);
        }
        else {
            InsereFila(odd,aux->info);
        }
        aux = aux -> prox;
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
            InsereFila(f,dados);
            imprimeFila(f);
    }
    createQueue(f,A,B);
            printf("\n\nEven: ");
            imprimeFila(A);
            printf("\n---------------------------------------");
            printf("\n\nOdd: ");
            imprimeFila(B);
}
