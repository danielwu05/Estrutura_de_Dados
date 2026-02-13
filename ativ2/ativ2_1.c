#include <stdio.h>

   float receba1(float x, float y, float z)
  {
      return (x*x)+y+z;
  }

     void receba2(float x, float y, float z, float *r)
  {
      *r=(x*x)+y+z;
  }

  int main()
  {
      float result,x,y,z;

      printf("\nx: ");
      scanf("%f", &x);
      printf("\ny: ");
      scanf("%f", &y);
      printf("\nz: ");
      scanf("%f", &z);

      result=receba1(x,y,z);

      printf("\n\nResultado1: %f", result);

      receba2(x,y,z,&result);

      printf("\n\nResultado2: %f", result);

    return 0;
  }

