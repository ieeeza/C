#include <stdlib.h>
#include <stdio.h>

int main() {
   int tentativas, numero_escolhido, numero_aleatorio;

   numero_aleatorio = rand() % 100 + 1;

   printf("Bem vindo ao jogo de adivinha! \n");

   do {
      printf("Escolha um numero de 1 a 100! \n");
      scanf(" %d", &numero_escolhido);
      tentativas++;

      if (numero_escolhido >  numero_aleatorio) {
         printf("Muito Alto! Tente novamente! \n");
      } else if ( numero_escolhido < numero_aleatorio) {
         printf("Muito Baixo! Tente novamente! \n");
      } else {
         printf("Parabens!! Voce acertou o numero em %d tentativas \n", tentativas);
      }

   } while (numero_escolhido != numero_aleatorio);
};