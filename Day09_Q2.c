/*Write a C program to calculate an electricity bill based on the following conditions:
Input the number of units consumed.
Calculate the bill according to these slabs:*/
#include <stdio.h>

int main()
{
    int units;
    float bill;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units < 0)
    {
        printf("Invalid Input");
    }
    else if (units == 0)
    {
        printf("No Electricity Consumption");
    }
    else
    {
        if (units <= 100)
        {
            bill = units * 2;
        }
        else if (units <= 200)
        {
            bill = 100 * 2 + (units - 100) * 3;
        }
        else if (units <= 300)
        {
            bill = 100 * 2 + 100 * 3
                   + (units - 200) * 5;
        }
        else
        {
            bill = 100 * 2 + 100 * 3
                   + 100 * 5 + (units - 300) * 7;
        }

        if (bill > 1000)
        {
            bill = bill + bill * 0.05;
        }

        printf("Electricity Bill = Rs. %.2f", bill);
    }

    return 0;
}
