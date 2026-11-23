/*Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria.*/
// 90-100: Grade A 
// 80-89: Grade B 
// 70-79: Grade C 
// 60-69: Grade D 
// below 60: Grade F. */

#include<stdio.h>
int main()
{
    float pct;
    printf("Enter percentage (0-100): ");
    scanf("%f", &pct);
    
    if (pct<=100 && pct>=90)
    {
        printf("Grade A");
    }
    else if (pct<=89 && pct>=70)
    {
        printf("Grade B");
    }
    else if (pct<=79 && pct>=70)
    {
        printf("Grade C");
    }
    else if (pct<= 69 && pct>= 60)
    {
        printf("Grade D");
    }
    else
    {
        printf ("Grade F");
    }
    return 0;
}