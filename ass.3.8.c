#include <stdio.h>
int main(){
	int a,b,c,d,s;
	printf("enter a sides:--");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&s);
	if (a==b || b==c && c==d || d==a)
	 if (s==90)
	  printf("This is square");
	 else
	  printf("This is rhombus");
	else if (a==c || b==d)
	 if (s==90)
	  printf("This is rectangle");
	 else
	  printf("This is parallelogram"); 
	else
	  printf("This is irregular quadrilateral");
	return 0;
	
}
