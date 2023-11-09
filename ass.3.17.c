#include <stdio.h>
int main() {
	int m;
	printf("Enter a number:--");
	scanf("%d",&m); 
	if (m%5==0) {
		printf("5 \n");
	} 
	else if (m%11==0) {
		printf("11");
	} 
	if (m%5==0 && m%11==0) {
		printf("BOTH");
	} 
	else if (m%5!=0 && m%11!=0) {
		printf("NONE");
	} 
	else {
		printf("NO");
	} 
	return 0;
}
