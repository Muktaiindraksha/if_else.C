#include <stdio.h>
int main()
{
    int first, second, add, subtract, multiply;
    int divide;
    
    printf("Enter two integers\n");
    scanf("%d%d", &first, &second);
    add        = first + second;
    subtract = first - second;
    multiply = first * second;
    divide     = first / (int)second;   //typecasting
    printf("Sum = %d\n",add);
    printf("Difference = %d\n",subtract);
    printf("Multiplication = %d\n",multiply);
    printf("Division = %d\n",divide);
    
    return 0;
}

 

