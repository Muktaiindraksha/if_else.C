#include <stdio.h>
int main() {
	int n;
	printf("enter a number:--");
	scanf("%d",&n);
	if (n<=9)
	printf("it is one digit no");
	else if (n<=99)
	printf("it is two digit no");
	else if (n<=999)
	printf("it is three digit no");
	else
	printf("it is more than three digit no");
	return 0;
	
}
