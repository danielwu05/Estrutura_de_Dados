#include <stdio.h>

int fibonacci(int N)
{
    if (N==1)
    {
        return 2;
    }
    if (N==2)
    {
        return 3;
    }
    return fibonacci(N-1)+fibonacci(N-2);
}

int main ()
 {
    int N,soma=0;

    scanf("%d",&N);

    for(N;N>0;N--)
    {
        soma+=fibonacci(N);
    }

    printf("\n\n %d ",soma);

    return 0;
}
