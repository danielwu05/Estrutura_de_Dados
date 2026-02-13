#include <stdio.h>

int main ()
 {
    int max=4,maior=-9999,menor=9999,diagp=0,count=0,diags=-9999  ;
    int m[4][4];
    int linha[4]={0,0,0,0};
    int coluna[4]={-9999,-9999,-9999,-9999};


     for(int j=0;j<max;j++)
    {

        for(int i=0;i<max;i++)
        {
            scanf("%d",&m[i][j]);
            if(i==j)
            {
                diagp+=m[i][i];
            }
            if(m[i][j]%2==0)
            {
                count++;
            }
            linha[j]+=m[i][j];
        }
        printf("\n");
    }

    printf("\n\n transposta: \n\n");

         for(int j=0;j<max;j++)
    {
        for(int i=0;i<max;i++)
        {
           printf(" %d ",m[i][j]);
        }
        printf("\n");
    }

     for(int i=0;i<max;i++)
    {
        for(int j=0;j<max;j++)
        {
           if(m[i][j]>coluna[j])
           {
               coluna[j]=m[i][j];
           }
           printf(" %d ",m[i][j]);
        }
        printf("\n");
    }

    printf("\n\n trocar col 0 com 3: \n\n");

    for(int j=0;j<max;j++)
    {

        for(int i=0;i<max;i++)
        {
            if(i==0)
            {
                i=3;
                printf(" %d ",m[i][j]);
                i=0;
            }
            else if(i==3)
            {
                i=0;
                printf(" %d ",m[i][j]);
                i=3;
            }
            else
            {
                printf(" %d ",m[i][j]);
            }
        }
        printf("\n");
    }

    for(int j=max;j>0;j--)
    {
        for(int i=0;i<max;i++)
        {
           if(m[i][j]>diags)
           {
               diags=m[i][j];
           }
        }
    }

    printf("\n\n");


    printf("linha: ");
    for(int i=0;i<max;i++)
    {
        printf(" %d ", linha[i]);
    }
    printf("\n");
    printf("coluna: ");
    for(int i=0;i<max;i++)
    {
        printf(" %d ", coluna[i]);
    }
 }
