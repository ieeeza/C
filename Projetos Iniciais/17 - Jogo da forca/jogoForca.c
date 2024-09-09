#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <time.h>

void printWord(char randomWord[], char progress[]);
void userInputAndVerify(char randomWord[], char c[27], char progress[27], int *try);

int main()
{
   srand(time(0));

   char *word[] = {"factorio", "balada", "horizonte", "ficante", "namorados", "belo", "league of legends"};
   char randomWord[50];
   char c[27] = {0};
   char progress[27];
   int try = 5;
   int random = rand() % 10;

   strcpy(randomWord, word[random]);

   printf("%s", randomWord);

   for (int i = 0; i < strlen(randomWord); i++)
   {
      progress[i] = '_';
   }
   progress[strlen(randomWord)] = '\0';

   printf("Bem vindo ao jogo da forca! \n");
   printf("Nos ja escolhemos uma palavra! \n");

   while (try > 0)
   {

      if (strcmp(randomWord, progress) == 0)
      {
         printf("\nParabens, voce adivinhou a palavra!\n");
         printf("A palavra era %s", randomWord);
         break;
      };

      printWord(randomWord, progress);
      userInputAndVerify(randomWord, c, progress, &try);
   };

   if (try == 0)
   {
      printf("\nSuas tentativas acabaram! A palavra era: %s\n", randomWord);
   };
}

void printWord(char randomWord[], char progress[])
{
   printf("PALAVRA: ");

   for (int i = 0; i < strlen(randomWord); i++)
   {
      printf("%c ", progress[i]);
   };

   printf("\n");
};

void userInputAndVerify(char randomWord[], char c[27], char progress[27], int *try)
{
   int found = 0;
   char currentC;

   printf("Digite uma letra: \n");
   scanf(" %c", &currentC);

   for (int i = 0; i < 27; i++)
   {
      if (c[i] == currentC)
      {
         printf("Voce ja tentou essa letra! Por favor tente outra! \n");
         return;
      }
      else if (c[i] == '\0')
      {
         c[i] = currentC;
         break;
      }
   };

   for (int i = 0; i < strlen(randomWord); i++)
   {  
      if (randomWord[i] == currentC)
      {
         printf("A palavra contem essa letra! \n");
         printf("Voce ainda tem %d tentativas!\n", *try);
         progress[i] = currentC;
         found = 1;
      };
   };

   if (!found)
   {
      (*try)--;
      printf("A palavra não contém essa letra. Tentativas restantes: %d\n", *try);
   };
};