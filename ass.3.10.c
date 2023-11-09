#include <stdio.h>
int main () {
	int p;
	printf("enter a number:--");
	scanf("%d",&p); 
	if (p<3000) {
		printf("the fixed amount%d",300);
	}
	else if (p>=3000 && p>=1600 ) { 
	   if (p<=1600)
		printf("the fixed amount is%d",p*15/100);
	   else 
	    printf("the fixed amount is%d",p*10/100);
	}
    else 
	{
	   printf("invalid");
    }
    return 0;
	   
} 
