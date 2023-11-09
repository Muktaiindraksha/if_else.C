#include <stdio.h>
int main() {
	int n;
	printf("enter a number:--");
	scanf("%d",&n);
	if (n<0)
	printf("no is negative");
	else if (n>0)
	printf("no is positive");
	else
	printf("no is zero");
	return 0;
	
}
