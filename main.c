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

   createTable();
}
void createTable(){
    char **table;
    int column;
    int row;
    int totalcells;
    totalcells = column * row;

    printf("Enter table size(column row)\n");
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

    totalcells = column * row;
    printf("Size %d x %d  for a total of %d cells \n",column, row, totalcells);


    //addstar start
    int rowstar;
    int columnstar;

    rowstar=rand()%row;
    columnstar=rand()%column;
    printf("%d %d ",rowstar,columnstar);

    table[rowstar][columnstar]='*';



    //addstart end
    //add x2letter begin
    int letterx2;
    int rowletterx2;
    int columnletterx2;
    int maxletterx2;
    maxletterx2 = totalcells / 10;
    printf("Number of letter x2 ? must be inferior to %d \n", maxletterx2);
    scanf( "%d",&letterx2);
    if (letterx2>maxletterx2){
        letterx2=maxletterx2;

    }
    for(int i=0;i<letterx2;i++){
        rowletterx2=rand()%row;
        columnletterx2=rand()%column;
        while(table[rowletterx2][columnletterx2]!='.'){
            rowletterx2=rand()%row;
            columnletterx2=rand()%column;
        }
        table[rowletterx2][columnletterx2]='l';
    }

    //add x2letter end
        //add x3letter begin
    int letterx3;
    int rowletterx3;
    int columnletterx3;
    int maxletterx3;
    maxletterx3 = totalcells / 20;
    printf("Number of letter x3 ? must be inferior to %d \n", maxletterx3);
    scanf( "%d",&letterx3);
    if (letterx3>maxletterx3){
        letterx3=maxletterx3;
    }
    for(int i=0;i<letterx3;i++){
        rowletterx3=rand()%row;
        columnletterx3=rand()%column;

        while(table[rowletterx3][columnletterx3]!='.'){
            rowletterx3=rand()%row;
            columnletterx3=rand()%column;
        }

        table[rowletterx3][columnletterx3]='L';


    }

    //add x3letter end

        //add x2letter begin
    int wordx2;
    int rowwordx2;
    int columnwordx2;
    int maxwordx2;
    maxwordx2 = (totalcells *16) / 225;
    printf("Number of word x2 ? must be inferior to %d \n", maxwordx2);
    scanf( "%d",&wordx2);
    if (wordx2>maxwordx2){
        wordx2=maxwordx2;

    }
    for(int i=0;i<wordx2;i++){
        rowwordx2=rand()%row;
        columnwordx2=rand()%column;
        while(table[rowwordx2][columnwordx2]!='.'){
            rowwordx2=rand()%row;
            columnwordx2=rand()%column;
        }
        table[rowwordx2][columnwordx2]='w';
    }

    //add x2letter end

            //add x3letter begin
    int wordx3;
    int rowwordx3;
    int columnwordx3;
    int maxwordx3;
    maxwordx3 = (totalcells *8) / 225;
    printf("Number of word x3 ? must be inferior to %d \n", maxwordx3);
    scanf( "%d",&wordx3);
    if (wordx3>maxwordx3){
        wordx3=maxwordx3;
    }
    for(int i=0;i<wordx3;i++){
        rowwordx3=rand()%row;
        columnwordx3=rand()%column;

        while(table[rowwordx3][columnwordx3]!='.'){
            rowwordx3=rand()%row;
            columnwordx3=rand()%column;
        }

        table[rowwordx3][columnwordx3]='W';


    }

    //add x3letter end
            //add x2letter begin
    int negative;
    int rownegative;
    int columnnegative;
    int maxnegative;
    maxnegative = totalcells / 20;
    printf("Number of negative cells ? must be inferior to %d \n", maxnegative);
    scanf( "%d",&negative);
    if (negative>maxnegative){
        negative=maxnegative;
    }
    for(int i=0;i<negative;i++){
        rownegative=rand()%row;
        columnnegative=rand()%column;
        while(table[rownegative][columnnegative]!='.'){
            rownegative=rand()%row;
            columnnegative=rand()%column;
        }
        table[rownegative][columnnegative]='N';
    }

    //add x2letter end



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


