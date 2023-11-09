#include <stdio.h>
int main() {
    int num= 0;
    printf("Enter a number: ");
    scanf("%d", &num);
	if (num>0) 
	   printf("natural number",num);
	else
       printf("not natural number",num);

    return 0;
}

