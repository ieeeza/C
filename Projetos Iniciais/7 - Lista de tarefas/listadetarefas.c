#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void menuList(char tarefas[10][75], int *tarefaCount);
void addTarefa(char tarefas[10][75], int *tarefaCount);
void listarTarefas(char tarefas[10][75], int *tarefaCount);
void apagarTarefas(char tarefas[10][75], int *tarefaCount);
bool checkTarefasEmpty(char tarefas[10][75]);

int main() {
   char tarefas[10][75] = {0};
   int tarefaCount = 0;

   printf("Boas vindas ao Lista De Tarefas! \n");
   printf("Checando se voce ja tem alguma tarefa salva...\n");

   if (checkTarefasEmpty(tarefas)) {
      printf("Voce nao tem tarefas cadastradas no momento...\n");
      menuList(tarefas, &tarefaCount);
   } else if (!checkTarefasEmpty(tarefas)) {
      printf("Voce tem tarefas cadastradas! \n");
   };
};

void addTarefa(char tarefas[10][75], int *tarefaCount) {
   int tarefaMax = 10;

   if (*tarefaCount >= tarefaMax) {
      printf("Não é possível adicionar mais tarefas. A lista está cheia.\n");
      return;
   };

   char tarefa[75];

   printf("Digite uma tarefa que deseja adicionar: \n");
   scanf(" %s", tarefa);
   tarefa[strcspn(tarefa, "\n")] = '\0';

   strncpy(tarefas[*tarefaCount], tarefa, 75 - 1);
   tarefas[*tarefaCount][75 - 1] = '\0';
   (*tarefaCount)++;

   printf("Tarefa adicionada! \n");
   printf("Voce tem %d adicionadas e pode adicionar mais %d tarefas! \n", *tarefaCount, tarefaMax - *tarefaCount);

   menuList(tarefas, tarefaCount);
};

bool checkTarefasEmpty(char tarefas[10][75]) {
   for (int i = 0; i < 10; i++) {

      if (tarefas[i][0] != '\0') {
         return false;
      };

   };
   return true;
};

void listarTarefas(char tarefas[10][75], int *tarefaCount) {

   for (int i = 0; i < 10; i++) {
      
      if (tarefas[i][0] != '\0') {
         printf("Tarefa %d: %s\n", i + 1, tarefas[i]);
      };
      
   };
   menuList(tarefas, tarefaCount);
};

void apagarTarefas(char tarefas[10][75], int *tarefaCount) {
   char tarefaEscolhida[10];

   for (int i = 0; i < 10; i++) {
      
      if (tarefas[i][0] != '\0') {
         printf("Tarefa %d: %s\n", i + 1, tarefas[i]);
      };

   };
   
   printf("Qual tarefa voce deseja deletar? Digite a tarefa \n");
   scanf(" %s", tarefaEscolhida);
   tarefaEscolhida[strcspn(tarefaEscolhida, "\n")] = '\0';

   for (int i = 0; i < 10; i++) {

      if (strcmp(tarefaEscolhida, tarefas[i]) == 0) {
         tarefas[i][0] = '\0';
         printf("Tarefa '%s' deletada com sucesso.\n", tarefaEscolhida);
      } else {
         printf("Tarefa '%s' nao encontrada.\n", tarefaEscolhida);
      };
   };
   menuList(tarefas, tarefaCount);
};

void menuList(char tarefas[10][75], int *tarefaCount) {
   char choice;

   printf("O que deseja mostrar? (A = ADICIONAR / L = LISTAR / D = APAGAR / S = SAIR) \n");
   scanf(" %c", &choice);
   //fgets(&choice, sizeof(choice), stdin);
   choice = toupper((unsigned char)choice);

   if (choice == 'A') {
      addTarefa(tarefas, tarefaCount);
   } else if (choice == 'L') {
      listarTarefas(tarefas, tarefaCount);
   } else if (choice == 'D') {
      apagarTarefas(tarefas, tarefaCount);
   } else if (choice == 'S') {
      return;
   } else {
      printf("Por favor digite uma opcao valida!");
      menuList(tarefas, tarefaCount);
   };
   return;
};