#include <stdio.h>
int main() {
	int h,h1,e,e1,s,s1,m,m1,p,p1,a,b;
	printf("Enter a number:--");
	scanf("%d %d %d %d %d %d %d %d %d %d",&h,&h1,&e,&e1,&s,&s1,&m,&m1,&p,&p1);
	a=h+e+s+m+p;
	b=h1+e1+s1+m1+p1;
	if (a<b)
	printf("The topper is class 7th");
	else
	printf("Not Topper!!! U tried well..");
	return 0;
	
}
