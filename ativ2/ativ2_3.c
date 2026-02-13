#include <stdio.h>

void imprimeSeries(int i, int j, int k)
{
    if (i<=j)
    {
        printf("%d  ", i);
    }
    imprimeSeries(i+k,j,k);
}

  int main()
  {
      int a, b, i;
      printf("\n\nDigite o primeiro valor: ");
      scanf("%d", &a);
      printf("\n\nDigite o ultimo valor: ");
      scanf("%d", &b);
      printf("\n\nDigite o incremento: ");
      scanf("%d", &i);


      imprimeSeries(a,b,i);

      return 0;
  }
