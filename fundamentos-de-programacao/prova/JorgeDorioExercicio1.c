#include <stdio.h>

int main(void){
  int num = 0, soma = 0, somaTotal = 0, i = 0, j = 0, ultimoImpar = 1;

  printf("Informe um numero: ");
  scanf("%d", &num);

  if( num <= 1 )
  {
    printf("Valor invalido. Insira um valor maior que 1.\n");
  } else
  {
    for( i = 1 ; i <= num ; i++)
      {
        soma = 0;
        printf("%d => ", i);
        for( j = 0 ; j < i ; j++)
          {
            printf("%d ", ultimoImpar);
            soma += ultimoImpar;
            somaTotal += ultimoImpar;
            ultimoImpar += 2;
          }
        printf("= %d\n", soma);
      }
    printf("\nSoma total dos impares = %d\n", somaTotal);
  }
}
