#include <stdio.h>

int main(void) {
  char resposta;
  do{
    int j, index, numero, ehPrimo = 1, quantPorLinha, acc = 1, limInferior, limSuperior;

    printf("Insira o limite inferior: ");
    scanf("%d", &j);
    printf("Insira o limite superio: ");
    scanf("%d", &limSuperior);
    printf("\nInforme quantos números deseja inserir por linha: ");
    scanf("%d", &quantPorLinha);

    for(j; j < limSuperior; j++){
      for(index = 2; index < j; index++){
        if(j % index == 0){
          ehPrimo = 0;
        }
      }

      if(acc < quantPorLinha && ehPrimo){
        if(acc == 1){
        printf("\n%d",j);
        } else{
        printf("\t%d", j);
        }
        acc += 1;
      } else if (acc >= quantPorLinha){
        acc = 0;
        }

      ehPrimo = 1;
    }
  printf("\nDeseja rodar o programa de novo?\n");
  scanf("\n%c", &resposta);
  }while (resposta != 'n');

}

