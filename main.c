#include <stdio.h>
#include <stdlib.h>


int main()
{

   printf(" \n ");
   printf(" \n ");
   printf("...............................................................\n ");
   printf(" _____           _     _      _____         _   _   _      \n ");
   printf("|  _  |___ ___  |_|___| |_   |     |___ ___| |_| |_| |___   \n ");
   printf("|   __|  _| . | | | -_|  _|  |   --|  _| .'| . | . | | -_| \n ");
   printf("|__|  |_| |___|_| |___|_|    |_____|_| |__,|___|___|_|___| \n ");
   printf("              |___|                                        \n");
   printf("...............................................................\n ");
   printf("\n");

   char rep;
   printf("Enter \"p\" to play or an other String to stop the program\n");
   scanf("%s", &rep);

   switch (rep)
   {

   case 112:
      printf("Choix 1 \n");

      game();

      break;
   default:
      printf("See you later ! ");
      exit(0);
   }
   return 0;

   // exiting();
}

void game()
{
   char letter[27] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '&'};
   int value[27] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 10, 1, 2, 1, 1, 3, 8, 1, 1, 1, 1, 4, 10, 10, 10, 10, 0};
   int piece[27] = {9, 2, 2, 3, 15, 2, 2, 2, 8, 1, 1, 5, 3, 6, 6, 2, 1, 6, 6, 6, 6, 2, 1, 1, 1, 1, 2};
   int joueur1 = 1;
   int joueur2 = 2;
   int index = 0;
   int main1[27];
   int main2[27];
   int exit = 0;
   for (int i = 0; i < 27; i++)
   {
      main1[i] = 0;
   }
   for (int i = 0; i < 27; i++)
   {
      main2[i] = 0;
   }

   int i = 0;
   int j = 0;
   while (!exit)
   {
      switch (index)
      {

      case 0:
          createTable();

         index++;
         break;
      case 1:
         i = 0;

         while (i < 7)
         {
            int r = rand() % 27;
            if (value[r] != 0)
            {
               value[r] -= 1;
               main1[r] += 1;
               i++;
            }
            j++;
         }
         i = 0;

         while (i < 7)
         {
            int r = rand() % 27;
            if (value[r] != 0)
            {
               value[r] -= 1;
               main2[r] += 1;
               i++;
            }
         }
         index++;
         break;
      /////////////// En construction //////////////////
      case 2:

         exit = 1;
         break;
      }
   }
   /////////////////////////////////////////////////
}

void createTable()
{
   char **table;
   int column;
   int row;

   printf("enter table size(column row)\n");
   scanf("%d %d", &column, &row);
   table = malloc(row * sizeof(int *));
   for (int i = 0; i < row; i++)
   {
      table[i] = malloc(column * sizeof(int));
   }
   for (int i = 0; i < row; i++)
   {
      for (int j = 0; j < column; j++)
      {
         table[i][j] = '.';
      }
   }
   //addstar start
   int rowstar;
   int columnstar;

   rowstar = rand() % row;
   columnstar = rand() % column;
   printf("%d %d ", rowstar, columnstar);

   table[rowstar][columnstar] = '*';
   //addstart end
   //add x2letter begin
   int letterx2;
   int rowletterx2;
   int columnletterx2;
   printf("number of letter x2\n");
   scanf("%d", &letterx2);

   for (int i = 0; i < letterx2; i++)
   {
      rowletterx2 = rand() % row;
      columnletterx2 = rand() % column;
      while (table[rowletterx2][columnletterx2] != '.')
      {
         rowletterx2 = rand() % row;
         columnletterx2 = rand() % column;
      }
      table[rowletterx2][columnletterx2] = 'l';
   }

   //add x2letter end
   //add x3letter begin
   int letterx3;
   int rowletterx3;
   int columnletterx3;
   printf("number of letter x3\n");
   scanf("%d", &letterx3);

   for (int i = 0; i < letterx3; i++)
   {
      rowletterx3 = rand() % row;
      columnletterx3 = rand() % column;

      while (table[rowletterx3][columnletterx3] != '.')
      {
         rowletterx3 = rand() % row;
         columnletterx3 = rand() % column;
      }

      table[rowletterx3][columnletterx3] = 'L';
   }

   //add x3letter end

   //add x2word begin
   int wordx2;
   int rowwordx2;
   int columnwordx2;
   printf("number of word x2\n");
   scanf("%d", &wordx2);

   for (int i = 0; i < wordx2; i++)
   {
      rowwordx2 = rand() % row;
      columnwordx2 = rand() % column;
      while (table[rowwordx2][columnwordx2] != '.')
      {
         rowwordx2 = rand() % row;
         columnwordx2 = rand() % column;
      }
      table[rowwordx2][columnwordx2] = 'w';
   }

   //add x2word end

   //add x3word begin
   int wordx3;
   int rowwordx3;
   int columnwordx3;
   printf("number of word x3\n");
   scanf("%d", &wordx3);

   for (int i = 0; i < wordx3; i++)
   {
      rowwordx3 = rand() % row;
      columnwordx3 = rand() % column;

      while (table[rowwordx3][columnwordx3] != '.')
      {
         rowwordx3 = rand() % row;
         columnwordx3 = rand() % column;
      }

      table[rowwordx3][columnwordx3] = 'W';
   }

   //add x3word end
   //add negative begin
   int negative;
   int rownegative;
   int columnnegative;
   printf("number of negative\n");
   scanf("%d", &negative);

   for (int i = 0; i < negative; i++)
   {
      rownegative = rand() % row;
      columnnegative = rand() % column;
      while (table[rownegative][columnnegative] != '.')
      {
         rownegative = rand() % row;
         columnnegative = rand() % column;
      }
      table[rownegative][columnnegative] = 'N';
   }

   //add negative end

   printTable(table, row, column);
}

void turn()
{

   int rep;

   printf("choose your action !(1-next turn 2-place piece 3-leave)");
   scanf("%d", &rep);

   switch (rep)
   {

   case 1:
      printf("Choix 1 \n");
      turn();
      break;
   case 2:
      printf("Choix 2 \n");
      turn();
      break;
   case 3:
      printf("Choix 3 \n");
      exiting();
      break;
   default:
      printf("choose your action !(1-next turn 2-place piece 3-leave)\n");
      turn();
   }
}

   void printTable(char **table, int row, int column)
   {
      system("cls");
      for (int i = 0; i < row; i++)
      {
         for (int j = 0; j < column; j++)
         {
            printf("%c", table[i][j]);
         }
         printf("\n");
      }
   }

   void exiting()
   {
      exit(0);
   }
