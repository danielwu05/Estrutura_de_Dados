#ifndef PILHAS_H_INCLUDED
#define PILHAS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct linkedList {

    int data;
    struct linkedList *next;

} node;

typedef struct stack {

    struct linkedList *Topo;
} Pilha;

node* ins_ini (node* t, int a) {
    node * aux;

    aux = (node *) malloc (sizeof(node));
    aux -> data = a;
    aux -> next =t;
    return aux;
}


void stackPush(Pilha* p, int dados) {
    p->Topo = ins_ini(p->Topo,dados);
}

node* ret_ini (node* t) {
    node * aux = t -> next;
    free (t);
    return aux;

}

Pilha * createStack () {
    Pilha* p;
    p= (Pilha*) malloc (sizeof(Pilha));
    p->Topo = NULL;
    return p;
}


int stackPop (Pilha* p) {
    int dados;
    node * tmp;
    if (p->Topo == NULL) {
        return 0;
    }
    dados = p->Topo -> data;
    tmp = p->Topo -> next;
    free (p->Topo);
    p->Topo = tmp;
    return dados;
}



int countStackSize (Pilha * p) {
    int count =0;
    while (p->Topo -> next != NULL) {
        count++;
        p->Topo = p->Topo->next;
    }
    return count;
}

void invertStack (Pilha * p) {
    Pilha* extra;
    int dados;
    extra = createStack();
    while (p->Topo != NULL) {
        dados = stackPop(p);
        stackPush(extra, dados);
    }
}



Pilha * removeElement (Pilha *p, int element) {
    Pilha* save;
    while (p->Topo!= NULL) {

        if (p->Topo->data!=element) {
            save->Topo->data=p->Topo->data;
            save->Topo=save->Topo->next;
        }
        p->Topo=p->Topo->next;
    }

    return save;
}

void printList(node * list){ //funcionando

    while (list != NULL) {
        printf("%d -> ", list->data );
        list = list -> next;
    }
    printf("NULL");
}

int mostElements (Pilha * A, Pilha * B) {
    int contagemA=0,contagemB=0;

    contagemA = countStackSize(A);
    contagemB = countStackSize(B);
    if (contagemA==contagemB) {
        return 0;
    }
    if (contagemA>contagemB)  return 1;
    else return 2;
}

Pilha * Digitos (int num) {
    Pilha * aux;
    int resto;

    while (num > 0 ) {
        resto = num%10;
        num %= 10;
        stackPush(aux, resto);
    }
}

Pilha * copyStack(Pilha* P) {
    node * auxP=P->Topo;
    Pilha* C=createStack();
    node * auxC = C->Topo;
    while (auxP !=NULL) {
        auxC=ins_ini(auxP,auxP->data);
        auxC= auxC->next;
    }
    return C;
}


#endif // PILHAS_H_INCLUDED
