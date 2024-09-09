#include <ctype.h>
#include <stdio.h>
#include <string.h>

void string_para_maiusculas(char *str) {
   for (int i = 0; str[i] != '\0'; i++) {
      str[i] = toupper((unsigned char)str[i]);
   }
}

void calcular_temperatura() {

   char temperatura_atual, temperatura_desejada;
   float temperatura_valor, temperatura_convertida;

   printf("Digite a letra da temperatura atual: ");
   scanf(" %c", &temperatura_atual);
   temperatura_atual = toupper((unsigned char)temperatura_atual);

   printf("Digite a letra da temperatura que deseja converter (C, F, K): ");
   scanf(" %c", &temperatura_desejada);
   temperatura_desejada = toupper((unsigned char)temperatura_desejada);

   printf("Digite o valor da temperatura atual: ");
   scanf(" %f", &temperatura_valor);

   switch (temperatura_atual) {
      case 'K':

         if (temperatura_desejada == 'C') {
            temperatura_convertida = temperatura_valor - 273;
         } else if (temperatura_desejada == 'F') {
            temperatura_convertida = (temperatura_valor - 273) * 1.8 + 32;
         } else if (temperatura_desejada == 'K') {
            printf("O valor convertido é: %f\n", temperatura_valor);
         } else {
            printf("Por favor digite uma temperatura valida!");
            return;
         };
         
      break;
      case 'C':

         if (temperatura_desejada == 'K') {
            temperatura_convertida = temperatura_valor + 273;
         } else if (temperatura_desejada == 'F') {
            temperatura_convertida = temperatura_valor * 1.8 + 32;
         } else if (temperatura_desejada == 'C') {
            printf("O valor convertido é: %f\n", temperatura_valor);
         } else {
            printf("Por favor digite uma temperatura valida!");
            return;
         };

      break;
      case 'F':

         if (temperatura_desejada == 'C') {
            temperatura_convertida = (temperatura_valor - 32) / 1.8;
         } else if (temperatura_desejada == 'K') {
            temperatura_convertida = (temperatura_valor - 32) * 5 / 9 + 273;
         } else if (temperatura_desejada == 'F') {
            printf("O valor convertido é: %f\n", temperatura_valor);
         } else {
            printf("Por favor digite uma temperatura valida!");
            return;
         };

      break;
      default:
         printf("Por favor digite a letra de uma temperatura valida!");
      return;
   };

   printf("O valor convertido é: %f\n", temperatura_convertida);
};

void calcular_distancia() {

   char medida_atual, medida_converter;
   float valor_medida_atual, medida_resultado;

   printf("Qual medida voce deseja converter: \n");
   printf("C = CENTIMETROS \\ M = METROS \\ K = KILOMETROS \n");
   scanf(" %c", &medida_atual);
   medida_atual = toupper((unsigned char)medida_atual);

   printf("Digite o valor da medida: \n");
   scanf(" %f", &valor_medida_atual);

   printf("Digite o valor para qual deseja converter: \n");
   printf("C = CENTIMETROS \\ M = METROS \\ K = KILOMETROS \n");
   scanf(" %c", &medida_converter);
   medida_converter = toupper((unsigned char)medida_converter);

   switch (medida_atual) {
      case 'C':

         if (medida_converter == 'M') {
            medida_resultado = valor_medida_atual / 100;
         } else if (medida_converter == 'K') {
            medida_resultado = valor_medida_atual / 1000;
         } else {
            printf("Digite um valor valido para qual quer converter! \n");
            return;
         };

      break;
      case 'M':

         if (medida_converter == 'C') {
            medida_resultado = valor_medida_atual * 100;
         } else if (medida_converter == 'K') {
            medida_resultado = valor_medida_atual / 1000;
         } else {
            printf("Digite um valor valido para qual quer converter! \n");
            return;
         };

      break;
      case 'K':

         if (medida_converter == 'C') {
            medida_resultado = valor_medida_atual * 100000;
         } else if (medida_converter == 'M') {
            medida_resultado = valor_medida_atual * 1000;
         } else {
            printf("Digite um valor valido para qual quer converter! \n");
            return;
         }
      default:
         printf("Por favor digite a letra de uma medida valida!");
      return;
      };

   printf("O valor convertido e: %.2f", medida_resultado);
};

void calcular_horario() {

   char medida_tempo_atual, medida_tempo_converter;
   int medida_tempo_atual_valor, medida_tempo_converter_valor;

   printf("Por favor digite qual medida de tempo voce deseja converter: \n");
   printf("H = HORAS \\ M = MINUTOS \\ S = SEGUNDOS \n");
   scanf(" %c", &medida_tempo_atual);
   medida_tempo_atual = toupper((unsigned char)medida_tempo_atual);

   printf("Digite o valor da sua medida de tempo atual: \n");
   scanf(" %d", &medida_tempo_atual_valor);

   printf("Por favor digite qual medida de tempo voce deseja converter: \n");
   printf("H = HORAS \\ M = MINUTOS \\ S = SEGUNDOS \n");
   scanf(" %c", &medida_tempo_converter);
   medida_tempo_converter = toupper((unsigned char)medida_tempo_converter);

   switch (medida_tempo_atual) {
      case 'H':
         
         if (medida_tempo_converter == 'M') {
            medida_tempo_converter_valor = medida_tempo_atual_valor * 60;
         } else if (medida_tempo_converter == 'S') {
            medida_tempo_converter_valor = medida_tempo_atual_valor * 3600;
         } else {
            printf("Digite um valor valido para qual quer converter! \n");
            return;
         };

      break;
      case 'M':
         
         if (medida_tempo_converter == 'H') {
            medida_tempo_converter_valor = medida_tempo_atual_valor / 60;
         } else if (medida_tempo_converter == 'S') {
            medida_tempo_converter_valor = medida_tempo_atual_valor * 60;
         } else {
            printf("Digite um valor valido para qual quer converter! \n");
            return;
         };

      break;
      case 'S':
         
         if (medida_tempo_converter == 'H') {
            medida_tempo_converter_valor = medida_tempo_atual_valor / 3600;
         } else if (medida_tempo_converter == 'M') {
            medida_tempo_converter_valor = medida_tempo_atual_valor / 60;
         } else {
            printf("Digite um valor valido para qual quer converter! \n");
            return;
         };

      break;
      default:
         printf("Por favor digite a letra de uma medida de horario valida!");
      return;
   };

   printf("O valor convertido é: %d", medida_tempo_converter_valor);
};

int main() {

   char unidade_conversao[12];

   printf("Bem vindo ao Conversor de Unidades Universal! \n");
   printf("Digite o que voce deseja converter: (DISTANCIA, TEMPERATURA, HORARIO) \n");
   scanf(" %11s", unidade_conversao);
   string_para_maiusculas(unidade_conversao);

   if (strcmp(unidade_conversao, "DISTANCIA") == 0) {
      calcular_distancia();
   } else if (strcmp(unidade_conversao, "TEMPERATURA") == 0 ) {
      calcular_temperatura();
   } else if (strcmp(unidade_conversao, "HORARIO") == 0 ) {
      calcular_horario();
   } else {
      printf("Por favor digite uma das opcoes listadas!");
   }

   return 0;
};