#include <stdio.h>

int main ()
 {
    int max,maior=-9999,menor=9999;
    int m[3][3];

    do
    {
        scanf("%d",&max);
    }while(max>3);


    for(int j=0;j<max;j++)
    {
        for(int i=0;i<max;i++)
        {
            scanf("%d",&m[i][j]);
            if(m[i][j]>maior)
            {
                maior=m[i][j];
            }
            if(m[i][j]<menor)
            {
                menor=m[i][j];
            }
        }
    }

    printf("\n\n maior: %d",maior);
    printf("\n\n menor: %d",menor);
    return 0;
}
