#include <stdio.h>
int main ()
 {
    int num, count=0,count3=0,count7=0,sum=0;
    float perc;

    do
     {
        printf("\n digite um numero: ");
        scanf("%d",&num);
        if (num>=0)
        {
            count++;
            if (num%3==0 && num>0)
            {
                count3++;
                if(num>10)
                {
                    sum=sum+num;
                }
            }
            if (num%7==0 && num>0)
            {
                count7++;
            }
        }
    perc=(float) count7/count;

    }while(num>=0);
    printf("\n\n\n");
    printf("contagem: %d",count);
    printf("\n\n\n");
    printf("contagem de 3: %d",count3);
    printf("\n\n\n");
    printf("contagem de 7: %d",count7);
    printf("\n\n\n");
    printf("porcnetagem %f",perc);
    printf("\n\n\n");
    printf("%d",sum);
    return 0;
}
