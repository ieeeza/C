#include <stdio.h>

int main() {
   char nomeMoeda[15], nomeMoedaConvertida[10];
   int valorMoedaReferencia;
   long long int quantidadeMoeda ,quantidadeMoedaConvertida;

   printf("Bem vindo ao conversor universal de moeda!! \n");
   
   printf("Especifique quanto a 1 moeda vale referente para qual vai ser convertida: \n");
   scanf(" %d", &valorMoedaReferencia);

   printf("Especifique a quantidade dessa moeda que voce possui: \n");
   scanf(" %lld", &quantidadeMoeda);

   if (quantidadeMoeda <= 0) {
      printf("A quantidade de moeda deve ser positiva! \n");
      return 0;
   };

   if (valorMoedaReferencia == 0) {
      printf("O valor referencia deve ser diferente de 0 \n");
   } else if (valorMoedaReferencia > 0) {
      quantidadeMoedaConvertida = quantidadeMoeda * valorMoedaReferencia;
      printf("O valor convertido e de %lld", quantidadeMoedaConvertida);
   } else if (valorMoedaReferencia < 0) {
      quantidadeMoedaConvertida = quantidadeMoeda / valorMoedaReferencia;
      printf("O valor convertido e de %lld", quantidadeMoedaConvertida);
   };

   return 0;
};