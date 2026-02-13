# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# define tamanho 500000

typedef struct inteiro{
    int chave;
    float item;
}elemento;

typedef struct vetor{
    struct inteiro elemento[tamanho];
}vetor;



void troca(elemento* a, elemento* b){
    int aux = a->chave;
    a->chave = b->chave;
    b->chave = aux;
    float save = a->item;
    a->item = b->item;
    b->item = save;
}

void insercaodecrescente(elemento *v, int n) {
    int i, j;
    for(i = 1; i<n; i++) {
        for(j = i; j> 0; j--) {
            if(v[j-1].chave < v[j].chave) {
                troca(&v[j-1],&v[j]);
            }
        }
    }
}

int particao(elemento *v, int LI, int LS, int k){
    int aux, pivo, e=LI, d=LS,save;
    switch(k){
            case 2 ... 3: // quick sort pivo LI
                break;
            case 4 ... 5:// quick sort pivof LS
                troca(&v[LI],&v[LS]);
                break;
            case 6 ... 7:// quick sort pivo meio
                troca(&v[(LS+LI)/2],&v[LI]);
                break;
            default:
                break;
    }
    pivo=v[LI].chave;

    while(e < d)
    {
        while((v[e].chave>=pivo)&& (e<LS)) { e++;}
        while((v[d].chave<pivo)&&(d>LI)) {d--;}
        if(e<d){
            troca(&v[e],&v[d]);
        }
    }
    troca(&v[LI],&v[d]);
    return d;
}

void quicksort(elemento *v, int LI, int LS, int k){
    if(LI<LS){
        int p,i;
        p = particao(v,LI,LS, k);
        quicksort(v,LI,p-1, k);
        quicksort(v,p+1,LS, k);
    }
}

int generateRandomValue () {
    return (rand()%(300000 - 100000 + 1)) + 100000;
}

float generateRandomFloatValue () {
    return (rand()%(300000 - 100000 + 1)) + 100000;
}

vetor* generateVectors (int aleatorio) {
    vetor*array = (vetor*)malloc(sizeof(vetor)*20);
    for (int j = 0; j<20; j++){
            int i =0;
            array[j].elemento[i].chave = generateRandomValue();
            array[j].elemento[i].item = generateRandomFloatValue();
            for(i = 1; i<tamanho; i++){
                    array[j].elemento[i].item = generateRandomFloatValue();
                    if(aleatorio % 2 == 0){
                        array[j].elemento[i].chave = array[j].elemento[i-1].chave+100;
                    }
                    else{
                        array[j].elemento[i].chave = generateRandomValue();
                    }
            }
    }
    return array;
}

void copiarVetor (vetor* a, vetor* b) {
    for (int j = 0; j<20; j++){
            for(int i = 0; i<tamanho; i++){
                a[j].elemento[i].chave = b[j].elemento[i].chave;
                a[j].elemento[i].item = b[j].elemento[i].item;
            }
    }
}



int main() {
    srand(24808923);

    vetor*array = (vetor*)malloc(sizeof(vetor)*20);
    printf("Gerando vetores 'Crescente'...\n");
    vetor* array_crescente = generateVectors(0);
    printf("Gerando vetores 'Aleatorio'...\n");
    vetor* array_aleatorio = generateVectors(1);

    clock_t start, end;
    double soma,tempo,tmpvetor[21][8];

    for(int k = 0; k<8 ; k++) {
            soma = 0;
            (k % 2 == 0) ? copiarVetor(array,array_crescente) : copiarVetor(array,array_aleatorio);
            for(int i = 0; i<20; i++){
                switch (k) {
                    case 0 ... 1: // insertion sort
                        printf("\n[%d] Testando Insertion sort....\n",i);
                        start = clock();
                        insercaodecrescente(array[i].elemento, tamanho);
                        end = clock();
                        tempo = ((double) (end- start)) / CLOCKS_PER_SEC;
                        tmpvetor[i][k]=tempo;
                        soma += tempo;
                        break;
                    case 2 ... 7: // quick sort pivo LI
                        printf("\n[%d] Testando Quick sort....\n",i);
                        start = clock();
                        quicksort(array[i].elemento, 0, tamanho - 1, k);
                        end = clock();
                        tempo = ((double) (end- start)) / CLOCKS_PER_SEC;
                        tmpvetor[i][k]=tempo;
                        soma += tempo;
                        break;
                    default:
                        break;
                }
        }
        tmpvetor[20][k] = (double)soma/20;

    }
    free(array);
    free(array_crescente);
    free(array_aleatorio);
    const char* header =     " Vetor      |    Ins-C   |   Ins-A    |   Q-LI-C   |  Q-LI-A  |   Q-LS-C   |  Q-LS-A  | Q-Meio-C | Q-Meio-A";
    const char* separator = "----------------------------------------------------------------------------------------------------------";

    printf("%s\n", header);
    printf("%s\n", separator);

    for (int i = 0; i < 20; i++) {
        char label[11];
        sprintf(label, "Vetor #%d", i);

        printf("%-10s | %10.6f | %10.6f | %10.6f | %10.6f | %10.6f | %10.6f | %10.6f | %10.6f\n",
               label,
               tmpvetor[i][0], tmpvetor[i][1], tmpvetor[i][2], tmpvetor[i][3],
               tmpvetor[i][4], tmpvetor[i][5], tmpvetor[i][6], tmpvetor[i][7]);
    }

    printf("%s\n", separator);
    printf("%-10s | %10.6f | %10.6f | %10.6f | %10.6f | %10.6f | %10.6f | %10.6f | %10.6f\n",
           "M��dia",
           tmpvetor[20][0], tmpvetor[20][1], tmpvetor[20][2], tmpvetor[20][3],
           tmpvetor[20][4], tmpvetor[20][5], tmpvetor[20][6], tmpvetor[20][7]);
    return 0;
}


