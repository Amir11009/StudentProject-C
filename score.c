#include<stdio.h>
#include<conio.h>
int main( )
{
   float grade;
   while(1){

   	printf("\n Enter a grade.");
   	scanf("%f",&grade);
   	if(grade>=17 && grade <=20){
   	printf("\n grade=%5.2f, score=%c", grade,'A');
   }
   	else if(grade>=15 && grade <17){
   	printf("\n grade=%5.2f, score=%c", grade,'B');
}
   else if (grade>=12 && grade <15){
   	printf("\n grade=%5.2f, score=%c", grade,'C');
   	  }
   	else if(grade <11){
   	printf("\n grade=%5.2f, score=%c", grade,'D');
   	 	}
   }

   }
