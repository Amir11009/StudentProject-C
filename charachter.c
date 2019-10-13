#include <stdio.h>
#include <conio.h>
int main()
{

   int count;
   printf("Enter a statement with Enter in end:\n");
   while(getche() !='\r')
   count++;
   printf("\n length of statement is:%d",count) ;
   getch();
   return 0;
}

