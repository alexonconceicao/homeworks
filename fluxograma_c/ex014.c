#include <stdio.h>
#include <stdlib.h>

int main(void) {

  // 14 - Elabore um fluxograma que determine se um número inteiro positivo é
  // par ou ímpar e finalize o processamento quando o número lido for nulo

  int numero;

  while (1) {
    printf("Informe um numero (digite '0' para encerrar): ");
    scanf("%d", &numero);

    if (numero == 0) {
      break;
    }

    if (numero % 2 == 0) {
      printf("O numero %d e par.", numero);
    } else {
      printf("O numero %d e impar.", numero);
    }
  }
  printf("\n\n");
}