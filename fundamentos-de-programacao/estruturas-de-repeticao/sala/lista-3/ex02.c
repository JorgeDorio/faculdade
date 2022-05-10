#include <stdio.h>

int main(void){
  char repetir = 's';

  do {
    int quant = 0, index = 0, contador = 0, quantPorLinha = 0, contadorLinha = 0;
    float soma = 0;

    switch (repetir) {
      case 's':
        printf("\nInsira a quantidade de números impares que deseja: ");
        scanf("%d", &quant);

        printf("\nInsira a quantidade de números por linha: ");
        scanf("%d", &quantPorLinha);
        do {
          if(index % 2){
            printf("%d\t", index);
            soma += index;
            contador += 1;
            contadorLinha += 1;
            if(contadorLinha >= quantPorLinha){
              printf("\n");
              contadorLinha = 0;
            }
          }

          index += 1;
        } while(contador < quant);

        printf("\nA média entre os números é: %.2f\n", soma / quant);

        printf("Você deseja repetir o programa? (s ou n) ");
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
