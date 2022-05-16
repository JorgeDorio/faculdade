#include <stdio.h>
#include <math.h>

int main(void){
  char repetir = 's';

  do {
    int num = 0, parte1 = 0, parte2 = 0, soma = 0;
    float raiz = 0;

    for (num = 1000; num <= 9999; num++){
    parte1 = num / 100;
    parte2 = num - parte1 * 100;
    soma = parte1 + parte2;

    raiz = sqrt(num);
    
    if(soma == raiz){
        printf("%d\t", num);
      }
    }

    printf("\n\nVocê deseja repetir o programa? ( S / s )\n");
    scanf("\n%c", &repetir);
  } while(repetir == 's' || repetir == 'S');

  return 0;
}
