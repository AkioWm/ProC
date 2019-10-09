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
   break;
default:
   printf("See you later ! ");
   exit(0);
}
return 0;


   // exiting();

}
void exiting(){
    exit(0);
}
