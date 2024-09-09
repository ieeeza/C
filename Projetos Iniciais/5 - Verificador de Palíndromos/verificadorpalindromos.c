#include <stdio.h>
#include <string.h>
#include <ctype.h>

void limpar_string(char *str) {
   int j = 0; // Inicializa a váriavel J;
   for (int i = 0; str[i] != '\0'; i++) { // Verifica se o valor da caractere atual é diferente de \o;
      if (isalnum((unsigned char)str[i])) { //Verifica se a caractere verificada atual é alfanumerico; 
         // (unsigned char)str[i] converte str[i] para unsigned char para garantir que isalnum e tolower recebam um valor válido, independentemente do valor original do caractere. Isso é importante porque str[i] é do tipo char, e a conversão para unsigned char evita comportamento indefinido quando char tem um valor negativo.
         str[j] = tolower((unsigned char)str[i]); // Armazena o caractere em minusculo na posição J da string;
         j++; //Acresenta um valor de posição na string J;
      };
   };
   str[j] = '\0'; // Adiciona o valor de caractere nulo no final da string J;
};

int verificar_palindromo(char *str) {
   int len = strlen(str); // Retorna o comprimento da string sem contar o carctere nulo \o;
   for (int i = 0; i < len / 2; i++) { //Percorre a string ate sua metade; 
      if (str[i] != str[len - i - 1]) { //Verifica se a string é igual a sua versão espelhada;
         return 0; //Se qualquer par de caractere não corresponder vai retornar zero, mostrando que não é palíndromo;
      }
    }
    return 1; // Se todos pares corresponderem a string vai retorna zero mostrando que é um palíndromo;
}

int main() {
   char entrada[1000]; // Declara array com até 1000 bytes;

   printf("Digite uma palavra ou frase: \n");
   fgets(entrada, sizeof(entrada), stdin);
   
   // Remove o '\n' do final da string, se presente
   size_t len = strlen(entrada); //size_t: É um tipo de dado não assinado (geralmente definido como um unsigned int ou unsigned long) utilizado para representar o tamanho de objetos na memória. É apropriado para armazenar o valor retornado por strlen.
   if (len > 0 && entrada[len - 1] == '\n') { // Verifica se a string não é vazia e se o ultimo caracte é uma nova linha;
      entrada[len - 1] = '\0'; //Caso seja uma nova linha ele vai substituir para uma caractere nula;
   }

   limpar_string(entrada);

   if (verificar_palindromo(entrada)) {
      printf("É um palíndromo.\n");
   } else {
      printf("Não é um palíndromo.\n");
   }

   return 0;
};