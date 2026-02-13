#include <stdio.h>
#include <stdlib.h>

typedef struct linkedList {

    int data;

    struct linkedList *next;

}list;

list *startNode;

void insertData (int n)
{
        list *fnNode,*tmp;
        int num;

        startNode = (list *)malloc(sizeof(list)); //Alocando memoria para o no inicial

        if (startNode == NULL){
            printf("\nMemory cannot be allocated. "); //Verificando se o no inicial esta vazio
        }
        else {
            printf("\nInput data for node 1: ");
            scanf("%d", &num);

            startNode->data=num;//Atribuindo um dado para o no inicial
            startNode->next=NULL;
            tmp=startNode;


            for (int i = 2; i<=n; i++) {

                fnNode = (list*)malloc(sizeof(list));

                if (fnNode==NULL) {
                    printf("\nMemory cannot be allocated. ");
                }
                else {
                    printf("\nInput data for node %d: ", i);
                    scanf("%d", &num);

                    fnNode->data=num;
                    fnNode->next=NULL;

                    tmp->next=fnNode;
                    tmp=tmp->next;

                }
            }
        }

}

void displayList () {
        list *tmp;
        if (startNode==NULL) {
            printf("\nThe list is empty.");
        }
        else {
            tmp=startNode;
        }

       while (tmp!=NULL) {
            printf("\nData = %d", tmp->data);
            tmp = tmp->next;

        }
}

 int main()
 {
     int n;
     list *fnNode, *tmp;

     printf("\nInput the number of nodes: ");
     scanf("%d", &n);

     insertData(n);
     displayList();

     return 0;
 }
