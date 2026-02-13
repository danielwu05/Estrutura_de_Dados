#include <stdio.h>
#define tam 3

 typedef struct prod
 {
     int codigo;
     int qtd;
     float compra;
     float venda;

 }prod;

 int determinarqtd(prod *produtos, int maior)
 {
     int maior=produtos[0].qtd,save
     for(int i=0;i<tam;i++)
     {
         if (maior<produtos[i].qtd)
          {
              maior=produtos[i].qtd;
              save=i;
          }

     }
     return save;
 }

  int determinarlucro (prod *produtos, )
 {
     int maior=produtos[0].qtd,save
     for(int i=0;i<tam;i++)
     {
         if (maior<produtos[i].qtd)
          {
              maior=produtos[i].qtd;
              save=i;
          }

     }
     return save;
 }

  int main()
  {
      prod produtos[tam];

      int maior,lucro[tam],stonks;

      for (int i=0;i<tam;i++)
      {
          do{
            printf("\nDigite o codigo do produto: ");
            scanf("%d", &produtos[i].codigo);
          }while(produtos[i].codigo>999);
          printf("\nDigite a quantidade no estoque: ");
          scanf("%d", &produtos[i].qtd);
          printf("\nDigite o preco de compra: ");
          scanf("%f", &produtos[i].compra);
          printf("\nDigite o preco de venda: ");
          scanf("%f", &produtos[i].venda);
          lucro[i] = ()produtos[i].venda-produtos[i].compra;
          determinar(produtos, &stonks, &maior);

      }
        printf("\n\nO produto com maior quantidade de estoque: %d", maior);
        printf("\n\nO produto com maior lucro: %d ", stonks);
  }
