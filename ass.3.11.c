#include <stdio.h>
int main (){
	int r,c,t;
	printf("enter a number:--");
	scanf("%d %d %d",&r,&c,&t); 
	if (r>50 && c>0.7 && t>5600) {
	    printf("GRADE 10");
    } 
    else if (r>50 && c>0.7) {
    	printf("GRADE 9");
   } 
   else if (c>0.7 && t>5600) {
   	    printf("GRADE 8");
   }
   else if (r>50 && t>5600) {
   	    printf("GRADE 7");
   } 
   else 
       printf("ZERO");
    return 0;
    
}
