#include <stdio.h>

int main(void){
  char repetir = 's';

  do {
    int quant = 0;
    int ehPrimo = 1, index = 0, i = 0;

    switch (repetir) {
      case 's':
        printf("Informe a quantidade de núperos primos que serão exibidos: ");
        scanf("%d", &quant);

        for(i = 2; i <= quant; i++){
          for(index = 2;index < i; index++){
            if (i % index == 0) {
              ehPrimo = 0;
            }
          }
          if (ehPrimo) {
            printf("%d\t", index);
          }
          ehPrimo = 1;
        }

        printf("\nVocê deseja repetir o programa? (s ou n) ");
        scanf("\n%c", &repetir);
        break;
      case 'n':
        printf("Programa finalizado.\n");
        break;
      default:
        printf("Opção inválida. Você deseja repetir o programa? (s ou n) ");
        scanf("\n%c", &repetir);
        break;
    }

  } while(repetir != 'n');
}
