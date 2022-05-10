#include <stdio.h>

int main(void) {
  int quantAnos, i;
  float valorDoBem, depreciacao, valorFinal, taxa = 1.5, acc;

  printf("Insira o valor do bem: ");
  scanf("%f", &valorDoBem);

  printf("Insira a quantidade de anos: ");
  scanf("%d", &quantAnos);

  printf("Ano\tValor do bem\tDepreciação\tValor Depreciado\n");
  printf("===================================================\n");

  for (i = 1; i <= quantAnos; i++) {
    depreciacao = valorDoBem * (taxa / 100);
    valorFinal = valorDoBem - depreciacao;
    printf("%d\t%.2f\t\t%.2f\t\t%.2f\n", i, valorDoBem, depreciacao,
           valorFinal);
    valorDoBem = valorFinal;
    acc += depreciacao;
  }
  printf("===================================================\n");
  printf("Depreciação acumulada: %.2f\n", acc);
}
