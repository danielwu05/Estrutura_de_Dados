#include <stdio.h>

    int somaImpar(int N)
    {

        if (N%2==0)
        {
            N--;
        }

        if(N==1)
        {
            return 1;
        }
        return N+somaImpar(N-2);
    }



  int main()
  {
      int resultado, num;
      printf("\n\nDigite um numero: ");
      scanf("%d", &num);

        num*=2;

      resultado=somaImpar(num);

      printf("\n\nResultado: %d",resultado);


  }
