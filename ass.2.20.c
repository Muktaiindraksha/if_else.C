#include <stdio.h>
int main() {
	int n,a,b,c;
	printf("enter a number:--");
	scanf("%d",&n);
	a=n*100;
	b=a/10000;
	c=a-b;
	if (a<1000)
	printf(b);
	else
	printf("no");
	
	return 0;
	
}
