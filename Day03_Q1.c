#include<stdio.h>
// Program to convert degree celsius into Fahrenheit//
int main()
{
float celsius, Fahrenheit;
    printf("Enter temperature in degree celsius: ");
    scanf("%f", &celsius);
    
    Fahrenheit= (celsius*9/5) +32;
    printf("%f degree celsius is %.2f in Fahrenheit", celsius,Fahrenheit);
    return 0;

}
