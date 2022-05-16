#include <stdio.h>

int verificaPrimo(int num){
  int index = 0, ehPrimo = 1;

  for(index = 2; index < num; index++){
    if(num % index == 0){
      ehPrimo = 0;
    };
  }

  return ehPrimo;
}

int todosOsPrimos(int start, int end){
  int index = 0, quant = 0;
  for (index = start; index <= end; index++){
    if(verificaPrimo(index)){
      printf("%d ", index);
      quant += 1;
    } 
  }
  return quant;
}

int main(void){
  int num = 0;
  printf("Insira um número: ");
  scanf("%d", &num);

  if(num <= 0){
    printf("Insira um valor válido.\n");
  } else {
    for (int index = num; index <= num + 10; index++){
      printf("%d ==> ", index);
      printf("==> %d primos\n", todosOsPrimos(2, index));
    }
  }
}
