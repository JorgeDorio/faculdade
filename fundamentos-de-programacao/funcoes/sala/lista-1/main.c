#include <stdio.h>

void tabela(void){
  printf("\nCódigo\tDescrição\n");
  printf("1\tVerifica se é primo\n");
  printf("2\tCalcula o fatorial\n");
  printf("3\tAnalisa os divisores\n");
  printf("\nSelecione qual programa deseja rodar: ");
}

void selecionaPrograva(void){
  int programaSelecionado = 0;
  tabela();

  scanf(" %d", &programaSelecionado);

  switch (programaSelecionado) {
    case 1:
      printf("programa 1");
      break;
    case 2:
      printf("programa 2");
      break;
    case 3:
      printf("programa 3");
      break;
    default:
      printf("Valor inválido.\n");
      break;
  }


}

int main(void){
  char resposta = 's';

  while (resposta != 'n') {
    resposta ='s';
    switch (resposta) {
      case 's':
        selecionaPrograva();
        break;
      case 'n':
        printf("Fim do programa\n");;
        break;
      default:
        printf("%c\n", resposta);
        printf("Caractere não encontrado.\n");
        break;
    }
    printf("\nVocê deseja selecionar outro programa? (s ou n)");
    scanf(" %c", &resposta);
  }
}
