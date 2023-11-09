#include <stdio.h>
int main() {
	int n;
	printf("enter a number:--");
	scanf("%d",&n);
	if (n<=100)
	printf("No Charge");
	else if (n<=200)
	printf("the net charge amount will be:%d",(n-100*5));
	else
	printf("the net charge amount will be:%d",(100*5)+(n-200)*10);
	return 0;
}
