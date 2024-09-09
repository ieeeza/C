#include <stdio.h>

int main() {
   int numero_escolhido, resultado;

   printf("Escolha o numero que deseja gerar tabuada: \n");
   scanf(" %d", &numero_escolhido);
   printf("----------------\n");

   for (int i = 1; i <= 10; i++) {
      resultado = numero_escolhido * i;
      printf("%d * %d = %d\n", numero_escolhido, i, resultado);
   };
   printf("----------------\n");
};