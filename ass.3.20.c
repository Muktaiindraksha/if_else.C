#include <stdio.h>
int main () {
	int a,b,c,max,smax,max1,smax1;
	printf("Enter a number:--");
	scanf("%d %d %d",&a,&b,&c);
	if (a>b) {
		max=a;
		smax=b; 
	} 
    else if (c>max) {
    	max1=a;
    	smax=b; 
	}
	else if (smax1<max1) {
		printf("the second max is%d",smax);
	}
	else {
		printf("the max is%d",max1);
	}
	return 0;
		
}
