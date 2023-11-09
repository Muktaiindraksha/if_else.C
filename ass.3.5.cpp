#include <stdio.h>
int main() {
	int a,d,w;
	char g;
	printf("enter a,d,g");
	scanf("%d %d %c",&a,&d,&g);
	if (a>=18 && a<=30)
	{
	  	if (g=='m')
	     {
	   	    printf("the wage should be %d:",w=700*d);
	     }
	    else if (g=='f')
	     {
	   	    printf("the wage should be:%d",w=750*d);
	     }
   }
	else if (a>30 && a<=40)
	{
		   if (g=='m')
		   {
		   	 printf("the wage should be%d",w=800*d);
		   }
		   else if(g=='f') 
		   {
		   	 printf("the wage should be%d",w=850*d);
		   }
   }
   return 0;
}

