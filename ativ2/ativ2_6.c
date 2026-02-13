#include <stdio.h>
#include <string.h>
#include <strings.h>

  int max(int *vetor, int N,int maxi)
  {
      if (N==0)
      {
          return maxi;
      }
      if (vetor[N]>=vetor[N-1])
      {
          maxi=vetor[N];
      }
    return max(vetor,N-1,maxi);

  }
  int main()
  {
      int vetor[5]={7,22,9,5,6}, resultado=-9999,i;
      i=5;
      i--;
      resultado=max(vetor,i,resultado);

      printf("\n\nMaior: %d",resultado );


  }
