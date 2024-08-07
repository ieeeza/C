#include <stdio.h>

#define SIZE 3

void printBoard(char board[SIZE][SIZE])
{
   for (int i = 0; i < SIZE; i++)
   {
      for (int j = 0; j < SIZE; j++)
      {
         printf("%c", board[i][j]);
         if (j < SIZE - 1)
            printf(" | ");
      }
      printf("\n");
      if (i < SIZE - 1)
         printf("--------\n");
   }
}

int checkWinner(char board[SIZE][SIZE], char player)
{
   // Verificar linhas e colunas
   for (int i = 0; i < SIZE; i++)
   {
      if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
          (board[0][i] == player && board[1][i] == player && board[2][i] == player))
      {
         return 1;
      }
   }

   // Verificar diagonais
   if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
       (board[0][2] == player && board[1][1] == player && board[2][0] == player))
   {
      return 1;
   }

   return 0;
}

int isBoardFull(char board[SIZE][SIZE])
{
   for (int i = 0; i < SIZE; i++)
   {
      for (int j = 0; j < SIZE; j++)
      {
         if (board[i][j] == ' ')
         {
            return 0;
         }
      }
   }
   return 1;
}

void playGame()
{
   char board[SIZE][SIZE] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
   char currentPlayer = 'X';
   int row, col;

   while (1)
   {
      printBoard(board);
      printf("Jogador %c, entre com a linha e a coluna (0, 1, 2): ", currentPlayer);
      scanf("%d %d", &row, &col);

      if (row < 0 || row >= SIZE || col < 0 || col >= SIZE || board[row][col] != ' ')
      {
         printf("Movimento inválido. Tente novamente.\n");
         continue;
      }

      board[row][col] = currentPlayer;

      if (checkWinner(board, currentPlayer))
      {
         printBoard(board);
         printf("Jogador %c venceu!\n", currentPlayer);
         break;
      }

      if (isBoardFull(board))
      {
         printBoard(board);
         printf("Empate!\n");
         break;
      }

      currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
   }
}

int main()
{
   playGame();
   return 0;
}