#include <stdio.h>
#include <stdlib.h>

typedef struct linkedList {
    int data;
    struct linkedList * next;
}node;

node * insertListStart (node * currentNode, int data) {
    node * aux = (node *) malloc (sizeof(node));
    aux -> data = data;

    aux -> next = currentNode;
    currentNode = aux;

    return aux;

}

void printList (node * currentNode) {
    node * aux;
    aux = currentNode;
    while (aux != NULL) {
        printf("%d -> ",aux->data);
        aux = aux -> next;
    }
    printf ("NULL");
}

 int main()
 {
        node * lista;
        int n,data;

        printf("\n\n n = ");
        scanf("%d", &n);

        for(int i = 0; i<n; i++) {
            printf("\n\nElemento: ");
            scanf("%d", &data);
            lista = insertListStart(lista,data);
        }

        printList(lista);


 }
