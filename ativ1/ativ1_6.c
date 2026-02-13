#include <stdio.h>

int main ()
 {
    int i, count2=0,count5=0;
    int vetor[15];

    do
    {
        printf("digite o tamanho do vetor");
        scanf("%d",&i);
    }while(i>15);

    for(i;i>0;i--)
    {
        scanf("%d",&vetor[i]);
        if (vetor[i]%2==0)
        {
            count2++;
        }
        if (vetor[i]%5==0)
        {
            count5++;
        }
    }

    printf("\n\n count 2: %d ",count2);
    printf("\n\n count 5: %d ",count5);

    return 0;
}
