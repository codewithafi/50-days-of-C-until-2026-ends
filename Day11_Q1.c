/*Write a program to find profit or loss percentage given cost price and selling price.*/
#include<stdio.h>
int main()
{
    float profitp, lossp, cp, sp;
    printf("Enter cost price and selling price (separate by space): ");
    scanf("%f %f",&cp,&sp);
    
    if (cp<sp)
    {
        profitp= (sp-cp)/cp * 100;
        printf("Profit Percentage = %.2f", profitp);
    }
    else if (cp>sp)
    {
        lossp= (cp-sp)/cp * 100;
        printf("Loss Percentage = %.2f", lossp);
        
    }
    else 
    {
    printf("No profit or loss");
    }
    return 0;
}