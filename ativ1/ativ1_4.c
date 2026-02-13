#include <stdio.h>

int main ()
 {
    int num, i;
    float S=0;

    for(i=1;i<=10;i++)
    {
        num=i;
        S=S+num/(num*num);
        num=-num;
    }
    printf("%f",S);
    return 0;
}
