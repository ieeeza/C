#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>
#include <time.h>

#define checkType(x, type) _Generic((x), type: true, default: false)

void check(int maxNumber, int amountNumber, int timeSleep);
void runProgram(int maxNumber, int amountNumber, int timeSleep);

int main() {

   srand(time(0));

   int maxNumber, amountNumber, timeSleep;
  
   printf("Bem vindo ao gerador de numeros aleatorios! \n");
   printf("Digite o maximo numeral aleatorio que deseja: \n");
   scanf(" %d", &maxNumber);

   printf("Digite quantos numeros aleatorios deseja gerar: \n");
   scanf(" %d", &amountNumber);

   printf("Digite a velocidade que deseja que os numeros sejam mostrados na tela: \n");
   scanf(" %d", &timeSleep);

   timeSleep = timeSleep * 1000;

   check(maxNumber, amountNumber, timeSleep);
   
   runProgram( maxNumber, amountNumber, timeSleep);

   return 0;
};

void check(int maxNumber, int amountNumber, int timeSleep) {

   if (!checkType(maxNumber, int) || maxNumber < 0) {
      printf("Por favor digite um numero inteiro valido! \n");
      exit(EXIT_FAILURE);
   };

   if (!checkType(amountNumber, int) || amountNumber < 0) {
      printf("Por favor digite uma quantidade de números inteiros! \n");
      exit(EXIT_FAILURE);
   };

   if (!checkType(timeSleep, int) || timeSleep < 0) {
      printf("Por favor digite uma quantidade de números inteiros! \n");
      exit(EXIT_FAILURE);
   };

};

void runProgram(int maxNumber, int amountNumber, int timeSleep) {
   
   for (int i = 0; i < amountNumber; i++) {
      printf("Esperando %d segundos! \n", timeSleep / 1000);
      Sleep(timeSleep);
      int randomNumber = rand() % maxNumber + 1;
      printf("Numero aleatorio gerado: %d\n", randomNumber);
   };

};