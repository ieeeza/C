#include <stdio.h>

double firstNumber, secondNumber;
double resultado;
char operator;

int main() {
   printf("Digite o operador: ");
   scanf("%c", &operator);
   
   printf("Digite os dois numeros da operacao: ");
   scanf("%lf", &firstNumber);

   printf("Digite os dois numeros da operacao: ");
   scanf("%lf", &secondNumber);


   switch (operator) {
      case '+':
         resultado = firstNumber + secondNumber;
         printf("%.2lf + %.2lf = %.2lf", firstNumber, secondNumber, resultado);
         break;
      case '-':
         resultado = firstNumber - secondNumber;
         printf("%.2lf - %.2lf = %.2lf", firstNumber, secondNumber, resultado);
         break;
      case '*':
         resultado = firstNumber * secondNumber;
         printf("%.2lf + %.2lf = %.2lf", firstNumber, secondNumber, resultado);
         break;
      case '/':
         if (secondNumber != 0) {
            resultado = firstNumber / secondNumber;
            printf("%.2lf + %.2lf = %.2lf", firstNumber, secondNumber, resultado);
         } else {
         printf_s("Erro: Não foi possivel fazer a divisão!");
         };
         break;
      default:
         printf_s("Por favor digite um operador valido!");
         break;
   };

   return 0;
};

