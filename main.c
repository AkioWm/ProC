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
    table=createTable();
   break;
default:
   printf("See you later ! ");
   exit(0);
}
return 0;


   // exiting();

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
