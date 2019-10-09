#include <stdio.h>
#include <stdlib.h>



int main()
{
   char rep;
   printf("Entrer sur \"p\" pour jouer ou une autre touche pour arrêter le programme\n");
   scanf("%s",&rep);

   switch (rep)
   {

   case 112:
      printf("Choix 1 \n");
      break;
   default:
   printf("Au Revoir");
   exit(0);

    }


   // printf("Enter name: ");
   // scanf("%s", str1);
   // printf("Entered Name: %s\n", str1);
   // printf("Entered Website:%s", str2);

   return(0);

}
