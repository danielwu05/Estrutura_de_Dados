#include <stdio.h>
int main ()
 {
    int num,sum=0,init=1;

    printf("Digite a base da potencia ao quadrado: ");
    scanf("%d",&num);

    for (;num>0;num--)
    {

        printf(" %d ",init);
        sum=sum+init;
        init+=2;
    }
    printf("= %d",sum);
    return 0;
}
