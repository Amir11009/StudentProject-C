#include <conio.h>
#include <stdio.h>
int main(){
int i , j, stno,s2,n,m,un,c1=0,c2=0;
float s1,ave,grade;
printf("\n Enter number of student:");
scanf("%d",&n);
for(i=0;i<n;i++){
	printf("\n Enter stno and # of course: ");
	scanf("%d%D", &stno,&m);
	s1=0;
	s2=0;
	for(j=0;j<m;j++){
		printf("\n Enter grade and unit # %d:",j+1);
		scanf("%f%d",&grade,&un);
		s1+=grade*un;
		s2+=un;
	}
	ave=s1/s2;
	if(ave>=17){
		printf("stno=%d,ave=%5.2f,<excellent>",stno,ave);
		c1++;
	}
else if (ave<12){
		printf("stno=%d,ave=%5.2f,<excellent>",stno,ave);
		c2++;
	}
	printf("\n press a key to continue ...");
	getch();
	}
	printf("\n excellent=%d, probation=%d",c1,c2);
	getch();
	return 0;
		}
