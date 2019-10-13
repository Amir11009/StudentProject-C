#include <stdio.h>
#include <conio.h>
unsigned long fact(int);
int main()
{
    int m;

    printf("Enter a positive 5 number: ");
    scanf("%d",&m);
        printf("\n number=%d, fact= %d",m,fact(m));
getch();
return 0;
}
unsigned long fact(int x)
{
	if(x !=0)
	return(x * fact(x -1));
	return 1;
	
}
     
