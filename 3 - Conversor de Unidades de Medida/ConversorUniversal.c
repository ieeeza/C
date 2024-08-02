#include <ctype.h>
#include <stdio.h>
#include <string.h>

void string_para_maiusculas(char *str) {
   for (int i = 0; str[i] != '\0'; i++) {
      str[i] = toupper((unsigned char)str[i]);
   }
}

void calcular_temperatura() {

   char current_temp, desired_temp;
   int temp_value, converted_temp;

   printf("Digite a letra da temperatura atual: ");
   scanf_s(" %c", &current_temp);
   current_temp = toupper(current_temp);

   printf("Digite a letra da temperatura que deseja converter (C, F, K): ");
   scanf_s(" %c", &desired_temp);
   desired_temp = toupper(desired_temp);

   printf("Digite o valor da temperatura atual: ");
   scanf_s(" %d", &temp_value);
   temp_value = toupper(temp_value);

   switch (current_temp) {
      case 'K':

         if (desired_temp == 'C') {
            converted_temp = temp_value - 273;
         } else {
            converted_temp = (temp_value - 273) * 1.8 + 32;
         };

      break;
      
      case 'C':

         if (desired_temp == 'K') {
            converted_temp = temp_value + 273;
         } else {
            converted_temp = temp_value * 1.8 + 32;
         };

      break;
      case 'F':

         if (desired_temp == 'C') {
            converted_temp = (temp_value - 32) / 1.8;
         } else {
            converted_temp = (temp_value - 32) * 5 / 9 + 273;
         };

      break;
      default:
         printf("Por favor digite a letra de uma temperatura valida!");
         break;
   };

   printf("O valor convertido é: %d", converted_temp);
};

void calcular_distancia() {

   char medida_atual, medida_converter;
   int valor_medida_atual ,medida_result;

   printf("Qual medida voce deseja converter: \n");
   printf("C = CENTIMETROS \\ M = METROS \\ K = KILOMETROS \n");
   scanf_s(" %c", medida_atual);
   medida_atual = toupper(medida_atual);

   printf("Digite o valor da medida: \n");
   scanf_s(" %d", valor_medida_atual);

   switch (medida_atual)
   {
   case 'C':

      if (medida_converter == 'M') {
         medida_result = valor_medida_atual * 100;
      } else if (medida_converter == 'K') {
         medida_result = valor_medida_atual * 1000;
      } else {
         printf("Digite um valor valido para qual quer converter! \n");
      }

      break;
   case 'M':

      if (medida_converter == 'C') {
         medida_result = valor_medida_atual / 60;
      } else if (medida_converter == 'K') {
         medida_result = valor_medida_atual * 1000;
      } else {
         printf("Digite um valor valido para qual quer converter! \n");
      }
      
      break;
   
   default:
      break;
   }
};

int main() {

   char unidade_conversao[12];

   printf("Bem vindo ao Conversor de Unidades Universal! \n");
   printf("Digite o que voce deseja converter: (DISTANCIA, TEMPERATURA, HORARIO \n");
   scanf_s(" %11s", unidade_conversao);
   string_para_maiusculas(unidade_conversao);

   if (strcmp(unidade_conversao, "DISTANCIA") == 0) {
      calcular_temperatura();
   } else if (strcmp(unidade_conversao, "TEMPERATURA") == 0 ) {

   } else if (strcmp(unidade_conversao, "HORARIO") == 0 ) {

   } else {
      printf("Por favor digite uma das opcoes listadas!");
   }

   return 0;
};