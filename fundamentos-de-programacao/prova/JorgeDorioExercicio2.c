#include <stdio.h>

int main(void)
{
  char repetir = 's';

  do {
    int
    limiteInferior = 0,
    limiteSuperior = 0,
    i = 0,
    j = 0,
    ehPrimo = 1,
    n1 = 0,
    n2 = 0,
    n3 = 0,
    soma = 0;

    printf("\nInforme o valor do limite inferior do intervalo: ");
    scanf("%d", &limiteInferior);
    printf("Informe o valor do limite superior do intervalo: ");
    scanf("%d", &limiteSuperior);

    if (
      limiteInferior >= 100 &&
      limiteInferior <= 999 &&
      limiteSuperior >= 100 &&
      limiteSuperior <= 999 &&
      limiteSuperior >= limiteInferior
    )
    {
      for ( i = limiteInferior ; i < limiteSuperior ; i++ )
        {
          ehPrimo = 1;
          for ( j = 2 ; j < i ; j++)
            {
              if( i % j == 0 )
              {
                ehPrimo = 0;
              }
            }
          if(ehPrimo)
          {
            printf("%d ==> ", i);

            n3 = i % 10;
            n2 = ( i / 10 ) % 10;
            n1 = ( i / 100 ) % 10;

            soma = n1 + n2 + n3;

            printf("%d + %d + %d", n1, n2, n3);

            if ( soma % 2 == 0)
            {
              printf(" ===> %d eh par\n", soma);
            } else 
            {
              printf(" ===> %d eh impar\n", soma);
            }
          }
        }

    } else
    {
      printf("Por favor, insira entradas validas.\n");
    }

    printf("\nDeseja repetir o programa (S/s)?");
    scanf("\n%c", &repetir);
  } while( repetir == 's' || repetir == 'S' );

  printf("Fim do programa.\n");

  return 0;
}
