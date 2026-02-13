#include <stdio.h>
int main ()
 {
    int num,tam, count=0;
    printf("\nDigite o numero:\n\n");
    scanf("%d",&num);
    printf("\n\n\n");
    while(num>0)
    {
        if (num%10==7)
        {
            count++;
        }
        num=num/10;
    }
    printf("\n\n\n");
    printf("%d",count);

    return 0;
}
