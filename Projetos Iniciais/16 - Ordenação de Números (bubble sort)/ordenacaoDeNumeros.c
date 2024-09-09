#include <stdio.h>
#include <windows.h>

void getAndPrintNumbers(int *numbers);
void sortAndPrintNumbers(int *numbers);

int main() {
   int numbers[11];

   printf("Bem vindo a ordenação de Numeros com bubble sort! \n");
   printf("Especifique 10 numeros aleatorios que vão ser ordenados: \n");
   printf("**AVISO** \n");
   printf("Caso voce especifique um numero negativo ele vai se tornar 0! \n");

   getAndPrintNumbers(numbers);

   printf("\nAgora vamos ordenar os numeros: \n");
   Sleep(3000);

   sortAndPrintNumbers(numbers);
}

void getAndPrintNumbers(int *numbers) {
   for (int i = 0; i < 10; i++) {
   scanf(" %d", &numbers[i]);
   if (numbers[i] < 0) {
         numbers[i] = 0;
      };
   };

   printf("Os numeros que voce escolheu foi: \n");

   for (int i = 0; i < 10; i++) {
      if (i != 0) {
         printf(" - %d", numbers[i]);
      } else {
         printf("%d", numbers[i]);
      };
   };
};

void sortAndPrintNumbers(int *numbers) {
   for (int i = 0; i < 10; i++) {
      for (int j = 0; j < 10; j++) {
         if (numbers[i] < numbers[j]) {
            int temp = 0;
            temp = numbers[i];
            numbers[i] = numbers[j];
            numbers[j] = temp;
         };
      };
   }

   printf("Os numeros ordenados ficou: \n");

   for (int i = 0; i < 10; i++){
      if (i != 0) {
         printf(" - %d", numbers[i]);
      }
      else {
         printf("%d", numbers[i]);
      };
   };
};