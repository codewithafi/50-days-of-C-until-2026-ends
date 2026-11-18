#include<stdio.h>
#include<math.h>
/* Program to find simple interest and compound interest*/
int main()
{
    float p,r,t,si,ci;
    printf("Enter principle, rate, and time separated by space: ");
    scanf("%f %f %f", &p,&r,&t);
    
    si=(p*r*t)/100;
    ci=p*(pow((1+r/100),t)-1);
    printf("Simple Interest = %.2f\nCompound Interest = %.2f\n",si,ci);
    return 0;
}