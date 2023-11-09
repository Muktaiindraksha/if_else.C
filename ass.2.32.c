#include <stdio.h>
int main(){
	int p,c,b,m,perc;
	printf("Enter a number:--");
	scanf("%d %d %d %d",&p,&c,&b,&m);
	perc=p+c+b+m/500*100;
	if (perc>=90)
	printf("GRADE A");
	else if (perc>=80)
	printf("GRADE B");
	else if (perc>=70)
	printf("GRADE C");
	else if (perc>=60)
	printf("GRADE D");
	else if (perc>=50)
	printf("GRADE E");
	else if(perc<40)
	printf("FAIL");
	else
	printf("INVALID");
	return 0;
}
