#include <stdio.h>
#include <string.h>
#define MAX 256

int main(void) {

  // 3 - Elabore um fluxograma que leia todos os números
  // digitados e imprima a soma dos números lidos
  // finalizando o processamento quando o número lido for zero

  int vetor[MAX];
  int contador = 0;
  int somatorio = 0;

  printf("\n\nInforme uma sequencia de numeros (digite '0' para encerrar):\n");
  for (int i = 0; i < MAX; i++) {
    scanf("%d", &vetor[i]);
    if (vetor[i] == 0) {
      break;
    }
    contador++;
  }

  for (int i = 0; i < contador; i++) {
    somatorio += vetor[i];
  }

  printf("\n\nSomatorio total: %d", somatorio);

  printf("\n\n");
}