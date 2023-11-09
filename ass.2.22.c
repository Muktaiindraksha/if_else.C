#include <stdio.h>
int main() {
	int a,b,c;
	printf("enter a number:--");
	scanf("%d %d",&a,&b);
	c=a/b*100;
	if (c<75)
	printf("Not allowed to sit in the exam");
	else
	printf("Allowed to sit in the exam");
	return 0;
	
}
