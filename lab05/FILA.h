#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

/* FUNÇÕES DE MANIPULAÇÃO DE PFILA

Fila* CriaFila()  CRIA A FILA

int VaziaFila (Fila* f) VERIFICA SE A FILA ESTÁ VAZIA RETORNA 1 QUANDO ESTÁ VAZIA

void InsereFila (Fila* f, int v) INSERÇÃO

int RetiraFila (Fila* f) REMOÇÃO

Fila* liberaFila (Fila* f) LIBERA A FILA

void imprimeFila (Fila* f)IMPRIME A FILA
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct nos
{
    int info;
    struct nos *prox;
}Nos;

typedef struct fila
{
    Nos * ini;
    Nos * fim;
} Fila;

int VaziaFila (Fila* f)
{
    if (f->ini==NULL) return 1;
    return 0;

}


Fila* CriaFila ()
{
    Fila* f = (Fila*) malloc(sizeof(Fila));
    f->ini = f->fim = NULL;
    return f;
}

Nos* ins_fim (Nos *fim, int A)
{
    Nos *p = (Nos*)malloc(sizeof(Nos));
    p->info = A;
    p->prox = NULL;
    if (fim != NULL) /* verifica se lista não estava vazia */
    fim->prox = p;
    return p;
}

void InsereFila (Fila* f, int v)
{
    f->fim = ins_fim(f->fim,v);
    if (f->ini==NULL) /* fila antes vazia? */
    f->ini = f->fim;
}

Nos* retira_ini (Nos* ini)
{
    Nos* p = ini->prox;
    free(ini);
    return p;
}

int RetiraFila (Fila* f)
{
    int v;
    if (VaziaFila(f))
    {
        printf("Fila vazia.\n");
        exit(0); /* aborta programa */
    }
    v = f->ini->info;
    f->ini = retira_ini(f->ini);
    if (f->ini == NULL) /* fila ficou vazia? */
    f->fim = NULL;
    return v;
}

void imprimeFila (Fila* f)
{
    Nos* q;
    printf("\n\t\t");
    for (q=f->ini; q!=NULL; q=q->prox)
    {
        printf("%d - ",q->info);
    }
    printf("\n");
}


Fila* liberaFila (Fila* f)
{
    Nos* q = f->ini;
    while (q!=NULL)
    {
        Nos* t = q->prox;
        free(q);
        q = t;
    }
    free(f);
    return NULL;
}

typedef struct linkedList {

    int data;
    struct linkedList *next;

} node;

typedef struct stack {

    struct linkedList *Topo;
} Pilha;

node* ins_ini (node* t, int a) {
    node * aux = (node*) malloc(sizeof(node));
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

void printList (Pilha * p) {

    while (p->Topo != NULL) {

        printf("%d -> ",p->Topo->data);
        p->Topo = p->Topo -> next;
    }
    printf ("NULL");
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

#endif // FILA_H_INCLUDED
