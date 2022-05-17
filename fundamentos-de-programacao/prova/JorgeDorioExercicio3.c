#include <stdio.h>

int main(void)
{ 
  char repetir = 's';
  do {
    char caractere = 'a';
    int valor = 0, quantCaracteres = 0, quantTotal = 0, ehPrimo = 1, j = 0;
    float percentual = 0;

    do {
      printf("Informe um caractere: ");
      scanf("\n%c", &caractere);

      valor = caractere;
      ehPrimo = 1;

      if (caractere != '0')
      {
        quantTotal += 1;
      }

      if ((valor >= 65 && valor <= 90) || (valor >= 97 && valor <= 122))
      {
        quantCaracteres += 1;
        printf("'%c' que corresponde ao decimal %d na tabela ASCII ", caractere, valor);

        for ( j = 2 ; j < valor ; j++)
          {
            if( valor % j == 0 )
            {
              ehPrimo = 0;
            }
          }
        if (ehPrimo)
        {
          printf("eh primo\n");
        } else
        {
          printf("nao eh primo\n");
        }
      }
    } while(caractere != '0');

    percentual = ((float) quantCaracteres / quantTotal) * 100;

    printf("\nPercentual de caracteres que nao sao lestras: %.2f%%\n", percentual);

    printf("\nDeseja executar novamente (S/s)? ");
    scanf("\n%c", &repetir);
  } while(repetir == 's' || repetir == 'S');

  return 0;
}
