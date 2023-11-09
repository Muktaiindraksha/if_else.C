#include <stdio.h>
int main() {
	int a,b,c;
	printf("enter a number:--");
	scanf("%d %d %d",&a,&b,&c);
	if (a>b)
	printf("MAX is:%d",a);
	else if (b>c)
	printf("MAX is:%d",b);
	else if (c>a)
	printf("MAX is:%d",c);
	else
	printf("MAX a");
	return 0;
	
}
