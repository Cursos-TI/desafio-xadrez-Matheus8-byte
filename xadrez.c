#include <stdio.h>

int main() {
  // Torre: Movimento para a direita (usando for)
  printf("Movimento da Torre:\n");
  for (int i = 0; i < 5; i++) {
    printf("Direita\n");
  }

  printf("\n"); // Linha em branco para separar as peças

  // Bispo: Movimento diagonal para cima e direita (usando while)
  printf("Movimento do Bispo:\n");
  int j = 0;
  while (j < 5) {
    printf("Cima, Direita\n");
    j++;
  }

  printf("\n"); // Linha em branco para separar as peças

  // Rainha: Movimento para a esquerda (usando do-while)
  printf("Movimento da Rainha:\n");
  int k = 0;
  do {
    printf("Esquerda\n");
    k++;
  } while (k < 8);

  return 0;
} 
