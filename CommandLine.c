/*CS288 H3 Session-2 HW#11;
*hwNumber11; 
*Adolfo Nakamura;
*07/31/2019*/
#include<stdio.h>

int main ( int argc, char* argv[])
{
   printf("\n Name of my program %s \t", argv[0]);
   
   if(argc ==2)
   {
      printf("\n Name of my program%s \t", argv[0]);
   }
   else if ( argc > 2)
   {
        printf("\n Many values given by users.\n");
   }
   else 
   {
      printf(" \n Single value expected. \n");
   }
   
      printf("Program is Finished!!");
   return 0;
 }