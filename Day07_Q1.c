#include<stdio.h>
int main()
/* Program to check whether input year is leap year or not.*/
int year;
printf("Enter year:");
scanf("%d",&year);
if(year%400=0)
{ printf("%d is a leap year", year);
}
else if (year%4=0 &&year%100=0)
{
printf("%d is a leap year", year);
}
else
{
}
printf("%d is not year", year);
return0;
}