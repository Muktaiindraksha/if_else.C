#include <stdio.h>
int main() {
	int t,u,bill;
	printf("enter a number:--");
	scanf("%d",&u);
	if (u<=50)
	  {
	    t=u*0.50;
	    bill=t+(t*0.2);
	    printf("the subcharge is%d",bill);
	  }
	else if (u<=150) 
	{
	  t=50*0.5+(u-50)*0.75;
	  bill=t+(u*0.2);
	  printf("the subcharge is%d",bill);
      }
	else if (u<=250)
	{
	
	  t=50*0.5+150*0.75+(u-200)*1.20;
	  bill=t+(u*0.2);
	  printf("the subcharge is%d",bill);
      } 
	else {
		t=50*0.5+150*0.75+250*1.20+(u-200)*1.5;
	}
	
	return 0;
	
}
	  
	  
	
	
