#include<stdio.h>
\\Program to swap two numbers without using third variable\\
int main()
{
    int a,b;
    printf("Enter two numbers seprated by space: ");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping,\nFirst number=%d,\nSecond number=%d",a,b);
    return 0;
}
