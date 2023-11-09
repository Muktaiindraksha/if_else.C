#include<stdio.h> 
 
int main() 
{ 
 int a,b,c,d,e; 
 
 printf("Enter the  five numbers :--"); 
 scanf("%d %d %d %d %d",&a,&b,&c,&d,&e); 
 
 if(a>b && a>c &&  a>d && a>e) 
  printf("%d is maximum occuring", a); 
 
 else 
  if(b>c && b>d && b>e) 
   printf("%d is maximum occuring", b); 
 
 else 
  if(c>d && c>e) 
   printf("%d is maximum occuring", c); 
 
 else 
  if(d>e) 
   printf("%d  is maximum occuring", d); 
 
 else 
  printf("%d is maximum occuring", e); 
  
 return 0; 
} 

