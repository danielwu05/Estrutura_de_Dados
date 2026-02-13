#ifndef PILHAS_H_INCLUDED
#define PILHAS_H_INCLUDED

typedef struct linkedList {

    int data;
    struct linkedList *next;

} node;

typedef struct stack {

    struct linkedList *Topo;
} Pilha;

node* ins_ini (node* t, int a) {
    node * aux = (node*) malloc(sizeof(node));
    aux -> info = a;
    aux -> next =t;
    return aux;

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

void stackPush(Pilha* p, int dados) {
    p->Topo = ins_ini(p->Topo,dados);
}

int stackPop (Pilha* p) {
    int dados;
    node * tmp;
    if (p->Topo == NULL) {
        return NULL;
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
    while (p->lista != NULL) {
        dados = stackPop(p);
        stackPush(extra, dados);
    }
}



void removeELement (Pilha *p, int element) {
    if (p->Topo == NULL) {
        return NULL;
    }
    while (p->Topo->data != element) {

    }

}



#endif // PILHAS_H_INCLUDED
