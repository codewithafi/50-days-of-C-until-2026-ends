/*Program to input three numbers and find the largest among them using if–else.*/
/* notes: Compare if a>b && a>c then a is largest
else if b>a && b>c then b is largest
a<b && a<c && b<c then c is largest */
#include<stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter three numbers separated by space: ");
    scanf("%d %d %d", &num1, &num2,&num3);
    
    if (num1>=num2 && num1>= num3)
    {
        printf("%d is largest number", num1);
    }
    else if (num2>=num3 && num2>=num1)
    {
        printf("%d is largest number", num2);
    }
    else 
    {
        printf("%d is largest number", num3);
    }
return 0;
}
