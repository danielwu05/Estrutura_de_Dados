#include "FILA.h"
#include <stdio.h>
#include <stdlib.h>


void createQueue (Fila * f,Fila * even, Fila* odd) {

    while(f -> ini != NULL) {
        int info = RetiraFila(f);
        if (info %2 ==0){
            InsereFila(even,info);
        }
        else {
            InsereFila(odd,info);
        }
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
    createQueue(f,A,B);
        printf("\n\nEven: ");
        imprimeFila(A);
        printf("\n---------------------------------------");
        printf("\n\nOdd: ");
        imprimeFila(B);
}
