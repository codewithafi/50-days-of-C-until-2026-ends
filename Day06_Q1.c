#include<stdio.h>
/* Program to input an integer and check whether it is positive, negative, or zero using nested if else.*/
int main()
{ 
    int i;
    printf("Enter an integer: ");
    scanf("%d",&i);
    
    if (i>0)
    { 
        printf("Given integer is positive.");
    }
    else
    {
        if (i<0)
    { 
        printf("Given integer is negative.");
    }
    else
    {
        printf("Given integer is Zero.");
    }
    }
    return 0;
    }