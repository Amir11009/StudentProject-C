#include <stdio.h>
#include <conio.h>
void convert(void);
int main()
{
	convert();
	return 0;
	
}

void convert(void)
{
	int hours, minutes,second;
	long int time;
	printf("\n enter time to be converter:h,m,s : ");
	scanf("%d%d%d",&hours,&minutes,&second);
	time=(long int) (60*hours +minutes )*60+second;
	printf("\n time is :%i seconds.",time);
	getch();
}
