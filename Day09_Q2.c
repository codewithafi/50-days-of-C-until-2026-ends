/*Write a C program to calculate an electricity bill based on the following conditions:
Input the number of units consumed.
Calculate the bill according to these slabs:
Rate for Units consumed 0-100 is ₹2 per unit
Rate for Units consumed 101-200 is ₹3 per unit
Rate for Units consumed 201-300 is ₹5 per unit
Rate for Units consumed above 300 is ₹7 per unit
Apply an additional surcharge of 5% if the total bill exceeds ₹1,000 */
#include<stdio.h>
int main()
{
    int unit;
    float bill;
    printf("Enter units consumed: ");
    scanf("%d", &unit);
    
    if (unit<0)
    {
        printf("Invalid input");
    }
    else if (unit==0)
    {
        printf("No electricity consumption");
    }
    else
    {
        if (unit<=100)
        {
            bill= unit*2;
        }
        else if (unit<=200)
        {
            bill= 100*2 + (unit-100)*3;
        }
        else if (unit<=300)
        {
            bill=100*2 + 100*3+ (unit-200)*5;
        }
        else
        {
            bill= 100*2+ 100*3+ 100*5+ (unit-300)*7;
        }
        if (bill>1000)
        {
            bill= bill+ bill*0.05;
        }
        printf("Electricity bill = %.2f", bill);
    }
    return 0;
}
