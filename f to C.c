#include <conio.h>
#include <stdio.h>
int main(){
	const int farconst =32;
	float farendeg,centdeg;
	printf("enter farenheite:");
	scanf("%f",&farendeg);
	centdeg =((float)5/9)*(farendeg - farconst);
	printf("Celsius = %5.2f",centdeg);
	getch();
	return 0;
}
