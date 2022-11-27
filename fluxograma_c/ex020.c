#include <stdio.h>
#include <stdlib.h>
#define MAX 256

int main(void) {

  // 20 - Elabore um fluxograma que leia uma sequência de números e imprima os
  // mesmos na ordem inversa da sua leitura e finalize o processamento quando o
  // número lido for nulo

  int vetor[MAX];
  int contador = 0;

  printf("\n\nInforme uma sequencia de numeros (digite '0' para encerrar):\n");
  for (int i = 0; i < MAX; i++) {
    scanf("%d", &vetor[i]);
    if (vetor[i] == 0) {
      break;
    }
    contador++;
  }

  printf("\n\nOrdem normal: ");
  for (int i = 0; i < contador; i++) {
    if (i == contador - 1) {
      printf("%d. ", vetor[i]);
    } else {
      printf("%d, ", vetor[i]);
    }
  }

  printf("\n\nOrdem invertida: ");
  for (int i = contador - 1; i >= 0; i--) {
    if (i == 0) {
      printf("%d. ", vetor[i]);
    } else {
      printf("%d, ", vetor[i]);
    }
  }
  printf("\n\n");
}