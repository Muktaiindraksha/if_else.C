#include <stdio.h>
int main() {
	int d,m,y;
	printf("enter a number:--");
	scanf("%d %d %d",&d,&m,&y);
	if (y>0)
	 if(m>0 && m<=12)
	   if (m==4 || m==6 || m==9 || m==11)
	     if (d>0 && d<=30)
	       printf("VALID");
	     else 
	     printf("INVALID");
	    else if (m==2)
	     if (d>0 && d<=29)
	       printf("VALID");
	     else
	       printf("INVALID");
	    else
	      if (d>0 && d<=31)
	       printf("VALID");
	      else
	      printf("INVALID");
	    else
	    printf("INVALID");
	else
	printf("INVALID");
	return 0;
	
}
