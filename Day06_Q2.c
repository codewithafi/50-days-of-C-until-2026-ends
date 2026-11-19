#include<stdio.h>
/* Program to input an integer and check whether it is odd or even.*/
int main()
{ 
    int i;
    printf("Enter an integer: ");
    scanf("%d",&i);
    
    if (i%2==0)
    { 
        printf("Given integer even.");
    }
    else
    {
    
        printf("Given integer is odd.");
    }
    
    return 0;
    } 