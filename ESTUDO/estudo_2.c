#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int data;
    struct no *next;
}node;

node *initList (){
    return NULL;
}

node * posEdit(node *recebe) {
    node *aux,*save;
    int pos,dado;

    save=recebe;
    aux=recebe;

    printf("\nEm qual posicao deseja alterar? ");
    scanf("%d", &pos);

    for(int i = 1; i <= pos ; i++) {
        aux=recebe->next;
        recebe=aux;
        printf("\n\n%d",i);

        if (i == pos-1) {
            printf("\nDigite o dado da posicao %d = ", i);
            scanf("%d", &dado);
            recebe->data=dado;
            recebe=save;

            return recebe;
        }
    }


}

node * insertList (node *recebe,int i) {

    node *aux;
    int dado;

    aux = (node *)malloc(sizeof(node));

    printf("\nDigite o dado da posicao %d = ", i);
    scanf("%d", &dado);

    aux->data=dado;
    aux->next=recebe;

    return aux;
}

void printList (node *recebe) {
    int i = 1;
    printf("enrtei na funcao");

    node * tmp;
    tmp=recebe;

    do{
        printf("\nData (%d) = %d", i, tmp->data);
        i++;
        tmp=tmp->next;
        printf("to no while");

    }while (tmp!=NULL);

    printf("saindo da funcao");

}

int chooseOption (node * No, int want) {

        int opt,n;


        printf("\n---------- Estudo de Linked List ----------");
        printf("\n\n O que deseja realizar?");
        printf("\n\n1. Criar lista; \n\n2. Editar Lista; \n\n3. Imprimir Lista; \n\n4. Inserir valor; \n\n5. Deletar valor; \n\n6. Apagar a lista \n\nDigite outras teclas para fechar o programa");
        printf("\n\n Digite a sua opcao: ");
        scanf("%d", &opt);

        system("cls");

        switch (opt) {
            case 1:
                printf("\nDigite quantos nos: ");
                scanf("%d", &n);
                for (int i =1 ; i<=n; i++) {
                    No=insertList(No,i);
            }
            return 0;

            case 2:
                No = posEdit(No);
                return 0;

            case 3:
                printf("entrei n o 3");
                printList(No);

                return 0;

            case 6:
                No = initList();
                return 0;

            default:
                want=1;
                return 1;
        }

}



int main()
 {
        node *No;
        No=initList();

        int exitProgram=0;

        while(exitProgram==0) {
            exitProgram= chooseOption(No,exitProgram);
        }

        printf("sai do while");





    return 0;





 }
