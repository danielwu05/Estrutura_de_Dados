#include "FILA.h"
#include <stdio.h>
#include <stdlib.h>


Fila * remove15 (Fila * f) {
    Fila * aux;
    aux = CriaFila();
    while (f -> ini != NULL) {
            int retira=RetiraFila(f);
        if (retira != 15) {
            InsereFila(aux,retira);
        }
    }
    return aux;
}

int main () {

    Fila * f;
    int dados=1,recebe;
    f=CriaFila();

    while(dados >0) {
            printf("\nDado: ");
            scanf("%d",&dados);
            InsereFila(f,dados);
            f=remove15(f);
            imprimeFila(f);

    }
}
