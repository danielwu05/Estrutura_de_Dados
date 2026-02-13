#include <stdio.h>

 int fat (int N)
 {
     if (N>1)
     {
         return N*fat(N-1);
     }
     return 1;
 }

  int main()
  {
      int resultado;
      for(int i=0; i<3; i++)
      {
          printf("\n\nDigite um numero:");
          scanf("%d", &resultado);
          resultado=fat(resultado);
          printf("\n\nFatorial: %d", resultado);
      }

    return 0;
  }
