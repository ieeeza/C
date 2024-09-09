#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

int main() {
   srand(time(0));
   char *word[] = {"factorio", "escola", "eclipse", "sabedoria", "horizonte", "belo", "maravilha", "reflexo", "galaxia", "harmonia"};
   int random = rand() %2 

   printf("%s", word[]);
}                                