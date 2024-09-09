#include <string.h>
#include <stdio.h>
#include <stdbool.h>

void countChar(char texto[500], int *countChars);
void countWord(char texto[500], int *countWords);

int main()
{
   int countChars = 0, countWords = 0;
   char texto[500];

   printf("Bem vindo ao Analisador de texto! \n");
   printf("Por favor digite seu texto: \n");
   fgets(texto, sizeof(texto), stdin);

   countChar(texto, &countChars);
   printf("O seu texto tem %d caracteres \n", countChars);

   countWord(texto, &countWords);
   printf("O seu texto tem %d palavras", countWords);

   return 0;
};

void countChar(char texto[500], int *countChars) {
   int size = strlen(texto);

   for (int i = 0; i < size; i++) {
      if (texto[i] != ' ' && texto[i] != '\n' && texto[i] != '\t') {
         (*countChars)++;
      };
   };
   (*countChars)--;
};

void countWord(char texto[500], int *countWords) {
   int size = strlen(texto);
   bool inWord = false;

   for (int i = 0; i < size; i++) {
      if (texto[i] != ' ' && texto[i] != '\n' && texto[i] != '\t') {
         if (!inWord) {
            (*countWords)++;
            inWord = true;
         };
      }
      else {
         inWord = false;
      };
   };
};