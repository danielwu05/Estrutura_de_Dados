#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
    int data;
    struct node * next;
}node;

node * initList() {
    return NULL;
}

node * insertListStart (node * no , int data) {
    node * tmp = (node *) malloc (sizeof (node));
    tmp -> data = data;
    tmp -> next = no;
    no = tmp;

    return no;
}

void insertListFinal (node * no , int data) {

    node * tmp = (node *) malloc (sizeof (node));

    tmp -> data = data;

    tmp -> next = NULL;
    while (no->next != NULL) {
        no = no -> next;
    }
    no->next = tmp;
}

node * deleteListStart (node *no) {
    node * copy;
    copy = no -> next;
    free(no);
    return copy;
}

void deleteListEnd (node *no) {
    while (no->next->next != NULL ) {
        no = no -> next;
    }
    free(no->next);
    no->next=NULL;
}

void printList (node * no) {
    while (no != NULL) {
        printf(" %d -> ", no->data);
        no = no->next;
    }
    printf("NULL");
}

bool findData (node * list, int data) {
        while (list != NULL) {
            if (data == list -> data) {
                return true;
            }
            list = list-> next;
        }
        return false;
}

bool verifyNull (node * list) {
        if (list != NULL) {
            return false;
            }
        else {
            return true;
            }
}

void countNodes (node * list) {
        int count=0;
        while (list != NULL) {
                count++;
                list = list-> next;

        }
        printf("\n\ncontagem = %d", count);
}



int main()
 {
     node * lista;
     int dados,opt;
     bool exist;

     lista = initList();

     do {
            printf("\n\nExercicio de Linked List");
            printf("\n\n1.inserir no comeco da lista;\n2.inserir no final da lista;\n3.imprimir lista;\n4.remover o comeco;\n5.remover o final;\n6.ver se existe uma lista;\n7.achar um valor na lista;\n8.contar quantos elementos tem na lista;");
            printf("\n9.fechar programa;\nDigite sua opcao = ");


            scanf("%d", &opt);

            system ("cls");

     switch (opt) {
        case 1: {
                printf("\n\nDigite o dado: ");
                scanf("%d", &dados);
                lista = insertListStart(lista,dados);
                break;
        }
        case 2: {
                printf("\n\nDigite o dado: ");
                scanf("%d", &dados);
                insertListFinal(lista,dados);
                break;
        }
        case 3: {
                printList(lista);
                break;
        }
        case 4: {
                lista = deleteListStart(lista);
                break;
        }
        case 5: {
                deleteListEnd(lista);
                break;
        }
        case 6: {
                verifyNull(lista);
                if (exist) {
                    printf("\nexiste uma lista");
                }
                else {
                    printf("\nnao existe uma lista");
                }
                break;
        }

        case 7: {
                printf("\n\ndigite o valor que quer achar: ");
                scanf("%d", &dados);
                exist = verifyNull(lista);
                if (exist) {
                    printf("\no dado existe na lista");
                }
                else {
                    printf("\no dado nao existe na lista");
                }
                break;
        }

        case 8:
            countNodes(lista);
            break;

        case 9 :
            return 0;
     }
     }while (opt!=9);



     }







