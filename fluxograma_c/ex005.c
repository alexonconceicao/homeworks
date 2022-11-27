#include <stdio.h>
#include <stdlib.h>
#define MAX 256

int main(void) {

  // 5 - Elabore um fluxograma que leia todos os números digitados e imprima a
  // soma e o produto dos números lidos que sejam concomitantemente maiores do
  // que 2 e menores do que 100 e diferentes de 10, 20 e 32 e finalizando o
  // processamento quando o número lido for zero.

  int vetor[MAX];
  int contador = 0;
  int somatorio = 0;
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
    if (vetor[i] == 10 || vetor[i] == 20 || vetor[i] == 32) {
      continue;
    }
    if (vetor[i] > 100) {
      continue;
    }
    if (vetor[i] < 2) {
      continue;
    }
    somatorio += vetor[i];
    produto *= vetor[i];
  }

  printf("\n\nSoma total: %d", somatorio);
  printf("\nProduto total: %d", produto);
  printf("\n\n");
}