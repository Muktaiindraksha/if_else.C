#include <stdio.h>
int main(){
	int cp;
	printf("Enter a number:--");
	scanf("%d",&cp);
	if (cp>100000)
	printf("the cost price is%d",cp*5/100);
	else if (cp>50000 && cp<=100000)
	printf("the cost price is%d",cp*10/100);
	else if (cp<=50000)
	printf("the cost price is%d",cp*5/100);
	else
	printf("NOT");
	return 0;
}
