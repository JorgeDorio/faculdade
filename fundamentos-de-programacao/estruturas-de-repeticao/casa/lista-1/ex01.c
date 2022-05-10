#include <stdio.h>

int main(void){
  int num = 0, quantDigitos = 0, cloneNum = 0, digito = 0, index = 0, acc = 0;

  printf("Insira um dígito: \n");
  scanf("%d", &digito);

  do {
    printf("Insira um número: ");
    scanf("%d", &num);

    cloneNum = num;

    while (cloneNum != 0) {
      quantDigitos = quantDigitos + 1;
      cloneNum = cloneNum / 10;
    }
    if (num != 0){
      printf("%d - possui %d dígitos\n",num, quantDigitos);
    }

    cloneNum = num;

    for (index = 0; index <= quantDigitos; index++){
      if(cloneNum % 10 == digito){
        acc += 1;
      }
      cloneNum = cloneNum / 10;
    }

    printf("%d possui %d dígitos %d\n", num, acc, digito);
    acc = 0;
    quantDigitos = 0;
  } while(num > 0);

  return 0;
}
