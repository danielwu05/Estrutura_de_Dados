#include <stdio.h>
#include <stdlib.h>

typedef struct linkedList {
    int data;
    struct linkedList * next;
}node;


node * resetList () {
    return NULL;
}

node * insertListFinal (node * currentNode, int n) {
    int data;
    node * head = (node *) malloc (sizeof (node));
    node * prox;
    printf("\n\nDigite o dado 1:  ");

    scanf("%d", &data);
    currentNode = (node *) malloc (sizeof (node));
    currentNode -> data = data;
    currentNode -> next = NULL;
    prox = currentNode;

    for (int i=2; i <=n ; i++) {
        prox = (node *) malloc (sizeof (node));
        printf("\n\nDigite o dado %d:  ", i);
        scanf("%d", &data);
        prox -> data = data;
        prox -> next = NULL;
        head -> next = prox;
        prox;
    }

    return head;
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

        lista=insertListFinal(lista, n);


        printList(lista);


 }
