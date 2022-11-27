#include <stdio.h>
#include <stdlib.h>
#define MAX 256

int main(void) {

  // 13 - Elabore um fluxograma que leia uma sequência de números e imprima o
  // seu produto e finalize o processamento quando o número lido for nulo

  int vetor[MAX];
  int contador = 0;
  int produto = 1;

  printf("\n\nInforme uma sequencia de numeros (digite '0' para encerrar):\n");
  for (int i = 0; i < MAX; i++) {
    scanf("%d", &vetor[i]);
    if (vetor[i] == 0) {
      break;
    }
    contador++;
  }

  for (int i = 0; i < contador; i++) {
    produto *= vetor[i];
  }

  printf("\nProduto total: %d", produto);
  printf("\n\n");
}