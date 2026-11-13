#include<stdio.h>
/* Program to input two integers and output their sum, difference,product and quotient.*/
int main()
{
    int sum, difference, product;
    float quotient;
    int a, b;
    
    printf("Enter two number separated by comma:");
    scanf("%d,%d",&a,&b);
    
    sum = a+b;
    difference = a-b;
    product = a*b;
    quotient = (float)a/b;
    
    printf("Sum = %d\nDifference = %d\nProduct = %d\nQuotient = %.2f\n", sum,difference,product,quotient);
    return 0;
}