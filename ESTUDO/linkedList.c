#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;

}node;

node * initList () {
    return NULL;
}

node * insertData(node * list, int data){ //funcionando
    node * aux;

    aux = (node *) malloc (sizeof(node));
    aux -> data = data;
    aux -> next =list;
    return aux;
}

node * insertDataFinal(node * head, int data){ //funcionando
    node * tail;
    node * copy;
    copy = head;
    tail = (node*) malloc (sizeof(node));
    if (head == NULL) {
        copy = insertData(head,data);
        return copy;
    }
    while (head->next != NULL) {
        head = head -> next;
    }
    tail -> data = data;
    tail -> next = NULL;
    head -> next = tail;
    return copy;
}



node* priorityInsert (node * lista, int data) {
    node * tail;
    node * copy;
    copy = lista;
    tail = (node*) malloc (sizeof(node));
    if (lista == NULL || data<lista->data) {
        copy = insertData(lista,data);
        return copy;
    }
    while (lista->next != NULL || data>lista->data) {
        lista = lista -> next;
    }
    tail -> data = data;
    tail -> next = NULL;
    lista -> next = tail;
    return copy;
}

void printList(node * list){ //funcionando

    while (list != NULL) {
        printf("%d -> ", list->data );
        list = list -> next;
    }
    printf("NULL");
}

int main () {
    node *head;

    head = initList();

    int dado;




    do{
        printf("\n\ndado: ");
        scanf("%d",&dado);

        head = priorityInsert(head, dado);
        printList(head);

    }while(dado!=-9999);


}
