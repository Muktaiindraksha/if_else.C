#include <stdio.h>
int main() {
	int n;
	printf("enter a days:--");
	scanf("%d",&n);
	if (n==5)
	printf("the charge is:%d",2);
	else if (n>=5 || n>=15)
	printf("the charge is:%d",5);
	else if (n<=5)
	printf("the charge is:%d",4);
	else
	printf("no charge");
	return 0;
}
