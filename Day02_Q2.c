#include<stdio.h>
/* Program to calculate the area and circumference of a circle given its radius.*/
int main()
{
    float radius,area,circumference;
    const float PI = 3.14;
    
    printf("Enter the radius of circle:");
    scanf("%f", &radius);
    
    circumference= 2*PI*radius;
    area = PI*radius*radius;
    
    printf("Circumference of circle with radius= %f is %.2f\nArea of given circle is %.2f\n",radius,circumference,area);
    return 0;
    
}