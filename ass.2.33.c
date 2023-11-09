#include <stdio.h>
int main() {
	int bs;
	printf("Enter a salary:--");
	scanf("%d",&bs);
	if (bs<=10000)
	printf("the basic salary is%d",bs+bs*25/100+80/100);
	else if (bs<=20000)
	printf("the basic salary is%d",bs+bs*25/100+25/100);
	else if (bs>20000)
	printf("the basic salary is%d",bs+bs*25/100+95/100);
	else
	printf("NO");
	
	return 0;
}
