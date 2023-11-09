#include <stdio.h>
int main(){
	int c,w,p;
	printf("enter a marks:--");
	scanf("%d %d",&c,&w);
	p=c+w/100*100;
	if (p<20 && p<20) {
		printf("Technical Fail");
	}
	else if  (p==44) {
	  printf("Moderated");
    } 
	if (p>=45) {
	  printf("Pass");
    }
	else {
	  printf("Fail");
    }
	return 0;
}
