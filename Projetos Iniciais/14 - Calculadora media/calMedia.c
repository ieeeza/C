#include <stdio.h>

int main() {
   long long int numbers[10], soma = 0;
   int size = sizeof(numbers) / sizeof(numbers[0]);

   printf("Dgite 10 numeros que deseja fazer a media: \n");

   for (int i = 0; i < size; i++) {
      scanf(" %lld", &numbers[i]);
      soma = soma + numbers[i];
   };

   double resultado = (double) soma / 10;

   printf("A media dos numeros que voce forneceu e: %.2f", resultado);
}