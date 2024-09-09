#include <stdio.h>

void calcularFatorial(int number);

int main() {
   int number;

   printf("Boas Vindas à calculadora fatorial! \n");
   printf("Por favor digite o número que deseja: \n");
   scanf(" %d", &number);

   if (number < 0) {
      printf("Fatorial não pode ser feito com números negativos!");
   } else if (number >= 0) {
      calcularFatorial(number);
   } else {
      printf("Por favor digite um número válido!");
   };
};

void calcularFatorial(int number) {
   long long int result = 1;
   int i;

   for (i = number; i > 0; i--) {

      if (i != 1) {
         printf("%d * ", i);
      } else {
         printf("%d \n", i);
      }

      result *= i;
   };

   printf("\n %lld", result);
};