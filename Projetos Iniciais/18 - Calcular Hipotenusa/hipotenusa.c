#include <stdio.h>
#include <math.h>

double A, B, C;

int main() {
   printf("Digite o lado A: ");
   scanf_s("%lf", &A);

   printf("Digite o lado B: ");
   scanf_s("%lf", &B);

   C = sqrt(A * A + B * B);

   printf("O valor da hipotenusa e %.2lf", C);

   return 0;
};