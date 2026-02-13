
#include <stdio.h>

int main ()
 {
    int i, maior=0;
    int vetor[8];

    for(i=0;i<8;i++)
    {
        scanf("%d",&vetor[i]);
        if (vetor[i]>30)
        {
            maior++;
        }
    }

    for(i=0;i<8;i++)
    {
        printf(" %d ",vetor[i]);
    }

    printf("\n\n maior: %d ",maior);

    return 0;
}
