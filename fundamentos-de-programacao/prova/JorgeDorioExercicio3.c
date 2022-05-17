#include <stdio.h>

int main(void)
{ 
  char repetir = 's';

  // Repete enquando o usuario digitar 's' ou 'S'
  do {
    // Inicializando variaveis
    char caractere = 'a';
    int valor = 0, quantCaracteres = 0, quantTotal = 0, ehPrimo = 1, j = 0;
    float percentual = 0;

    // Repete enquanto o usuario insere valores diferentes de 0
    do {
      printf("Informe um caractere: ");
      scanf("\n%c", &caractere); // Consumindo o \n no scanf pois meu compilador não limpa o buffer

      valor = caractere; // Valor equivalente na tabela ASCII
      ehPrimo = 1; // Reseta o valor

      if (caractere != '0')
      {
        quantTotal += 1;
      }

      // Verifica se o equivalente em ASCII esta entre 65 e 90 ou 97 e 122, que são os intevalos de caracteres alfanumericos maiusculos e minusculos, respectivamente 
      if ((valor >= 65 && valor <= 90) || (valor >= 97 && valor <= 122))
      {
        quantCaracteres += 1;
        printf("'%c' que corresponde ao decimal %d na tabela ASCII ", caractere, valor);

        // Verifica se eh primo
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

    percentual = (1 - ((float) quantCaracteres / quantTotal)) * 100;

    printf("\nPercentual de caracteres que nao sao letras: %.2f%%\n", percentual);

    printf("\nDeseja executar novamente (S/s)? ");
    scanf("\n%c", &repetir);
  } while(repetir == 's' || repetir == 'S');

  return 0;
}
