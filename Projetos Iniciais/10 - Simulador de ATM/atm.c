#include <stdio.h>
#include <windows.h>
#include <stdbool.h>

void menuATM(long long int saldo);
void verificarSALDO(long long int saldo);
void sacarSALDO(long long int saldo);
void depositarSALDO(long long int saldo);

int main() {
   long long int saldo = 0;
   char name[75];

   printf("Bem vindo ao ieza bank! \n");
   printf("Por favor nos fale seu nome:  \n");

   scanf(" %s", name);

   printf("So um momento...\n");
   Sleep(5000);

   printf("Bem vindo %s ao Ieza bank \n", name);
   printf("O que deseja fazer agora? \n");

   menuATM(saldo);

   return 0;
};

void menuATM(long long int saldo)
{
   char choice;

   printf("V = VERIFICAR SALDO / S = SACAR / D = DEPOSITAR \n");
   scanf(" %c", &choice);
   choice = toupper((unsigned char)choice);

   if (choice == 'V') {
      verificarSALDO(saldo);
   } else if (choice == 'S') {
      sacarSALDO(saldo);
   } else if (choice == 'D') {
      depositarSALDO(saldo);
   } else {
      printf("Por favor escolha uma opção disponivel!");
      menuATM(saldo);
   };
};

void depositarSALDO(long long int saldo) {

   long long int add = 0;

   printf("Quanto voce deseja depositar? \n");
   scanf(" %lld", &add);
   printf("So um momento...\n");
   Sleep(5000);
   saldo = saldo + add;
   printf("Pronto! Saldo adicionado a sua conta. \n");
   menuATM(saldo);
};

void verificarSALDO(long long int saldo) {
   printf("O seu saldo atual e de... \n");
   printf("%lld reais \n", saldo);
   printf("retornando ao menu! \n");
   Sleep(1000);
   menuATM(saldo);
};

void sacarSALDO(long long int saldo) {
   long long int sacar = 0;

   printf("Especifique a quantidade que deseja sacar: \n");
   scanf(" %lld", &sacar);
   printf("So um momento...\n");
   Sleep(5000);

   if (saldo >= sacar) {
      saldo = saldo - sacar;
      printf("Pronto!\n");
      menuATM(saldo);
   } else if (saldo < sacar) {
      printf("Saldo insuficiente! \n");
      menuATM(saldo);
   };
};