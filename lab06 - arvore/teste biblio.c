#include <stdio.h>
#include <stdlib.h>

#include "arvore.h"

int main() {

    Raiz * pai = IniciaArvore();
    pai = (Raiz*) malloc (sizeof(Raiz));
    pai->root = NULL;


    int info, altura = 0;

    do {
        printf("\n-------------------\nInfo: ");
        scanf ("%d", &info);

        if (info < 0) {
            info *= -1;
            pai-> root = RemoveGalho(pai->root,info);
            altura = alturaArvore(pai-> root);
        }
        if (info == 999) {
            pai = RemoveArvore(pai);
            pai = IniciaArvore();
        }

        else if (info >0){
            pai -> root = InsereArvore(pai -> root, info);
            altura = alturaArvore(pai-> root);
        }

        printf("\n qtd nos: %d\n", altura);
        altura = 0;
        print2D(pai -> root);
    }while (info !=0);

    printf("\n-------------------\nAchar: ");
    scanf ("%d", &info);

    if (BuscarArvore(pai -> root,info) == 1) {
        printf("\nO numero existe\n");
    }
    else {
        printf("\nO numero n existe\n");
    }
    return 0;
}
