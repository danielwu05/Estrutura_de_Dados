#include "FILA.h"
#include <stdio.h>
#include <stdlib.h>


void countParity (Fila * f) {
    Nos * aux;
    aux = f-> ini;
    int odd=0, even=0;
    while(aux != NULL) {
        if (aux->info %2 ==0){
            even++;
        }
        else {
            odd++;
        }
        aux = aux -> prox;
    }
    printf("\nContagem Par: %d \nContagem Impar: %d", even, odd);
}

int main () {

    Fila * f;
    int dados=1,recebe;
    f=CriaFila();

    while(dados >0) {
            printf("\nDado: ");
            scanf("%d",&dados);
            InsereFila(f,dados);
            imprimeFila(f);
            countParity(f);
    }
}
