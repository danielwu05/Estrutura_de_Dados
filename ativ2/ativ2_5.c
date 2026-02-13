#include <stdio.h>

  int somaVetor(int *vetor,int N)
  {

      if (N==0)
      {
          return vetor[0];
      }
      return vetor[N]+somaVetor(vetor,N-1);
  }

  int main()
  {
      int vetor[5]={5,5,5,6,5};
      int resultado=0, i;

      i=5;
      i--;

      resultado=somaVetor(vetor,i);

      printf("\n\nSoma: %d",resultado);

  }
