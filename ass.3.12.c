#include <stdio.h>
int main() {
	int n;
	printf("Enter a number:--");
	scanf("%d",&n);
	if (n%4==0) {
		printf("YES");
	}
	else if (n%100==0) {
		printf("YES");
	} 
	else if (n%400==0) {
		printf("YES");
	} 
	else {
		printf("NO");
	} 
	    
}
