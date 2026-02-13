# include <stdio.h>
# include <stdlib.h>
# include "Pilhas.h"

float media (Pilha* P) {
    node* aux;
    aux = P->Topo;
    int count=-1;
    int sum=0;
    int saveData;
    while(aux!=NULL) {
        sum+=aux->data;
        aux=aux->next;
        count++;
    }
    return (float)sum/count;
}

int main(){
    Pilha * P=createStack();
    Pilha * A=createStack();
    int dados;
    float mediaA;
    do {
        printf("\ndado: ");
        scanf("%d" , &dados);
        stackPush(P,dados);
        printList(P->Topo);

    }while(dados!=0);

    printf("\nPilha Copiada: ");

    A=copyStack(P);
    printList(A->Topo);


}
