#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "biblioteca.h"

int main(){

Animal pet;
Fila *Normal = CriaFila();
Fila *Emergencia = CriaFila();
Fila *Removidos = CriaFila();

while(Normal->fim->pets.prioridade!=-2 || Emergencia->fim->pets.prioridade!=-2) {
    InsereFila(Emergencia, Normal);

    printf("\nNormal: ");
    imprimeFila(Normal);
    printf("--------------------------------------");

    printf("\Emergencia: ");
    imprimeFila(Emergencia);
}

    if (Normal->fim->pets.prioridade!=-2 || Emergencia->fim->pets.prioridade!=-2) {
        RetiraFila(Emergencia,Normal,Removidos);
    }


