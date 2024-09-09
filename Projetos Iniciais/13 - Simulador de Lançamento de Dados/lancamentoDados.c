#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
   int dado = 0;

   srand(time(NULL));

   dado = rand() % 6 + 1;

   printf("Voce girou o dado e caiu %d", dado);

   return 0;
};
