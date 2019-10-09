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
    char **table;
    game();

   break;
default:
   printf("See you later ! ");
   exit(0);
}
return 0;


   // exiting();

}



void game(){
   char letter[27] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '&'};
   int value[27] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 10, 1, 2, 1, 1, 3, 8, 1, 1, 1, 1, 4, 10, 10, 10, 10, 0};
   int piece[27] = {9, 2, 2, 3, 15, 2, 2, 2, 8, 1, 1, 5, 3, 6, 6, 2, 1, 6, 6, 6, 6, 2, 1, 1, 1, 1, 2};
   int joueur1 = 1;
   int joueur2 = 2;
   int index = 0;
   char main1[8];
   char main2[8];


   switch(index){

      case 0:
         createTable();
         index++;
         break;
      case 1:
         for (int i = 0; i < 7; i++)
         {
            int r = rand() % 7;
         }
   
   
   
   }

   
}
void createTable(){
    char **table;
    int column;
    int row;

    printf("enter table size(column row)\n");
    scanf( "%d %d",&column,&row );
    table = malloc(row * sizeof(int*));
    for(int i = 0; i < row; i++){
        table[i] = malloc(column * sizeof(int));
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            table[i][j]='.';

        }
    }
    printTable(table,row,column);

}

void printTable(char **table,int row,int column){
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%c",table[i][j]);
        }
        printf("\n");
    }
}
void initTable(char **table,int row,int column){
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            table[i][j]='.';

        }
    }
}
void exiting(){
    exit(0);
}



