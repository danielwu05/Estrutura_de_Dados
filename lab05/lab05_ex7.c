#include "FILA.h"
#include <stdio.h>
#include <stdlib.h>


void createQueue (Fila * f,Fila * maior, Fila* menor) {

    while(f -> ini != NULL) {
        int info = RetiraFila(f);
        if (info > 20){
            InsereFila(maior,info);
        }
        else {
            InsereFila(menor,info);
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
        printf("\n\nMaior que 20: ");
        imprimeFila(A);
        printf("\n---------------------------------------");
        printf("\n\nMenor ou igual a 20: ");
        imprimeFila(B);
}
