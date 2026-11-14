#include<stdio.h>
/*Program to write to find perimeter and area of rectangle with given lenght and breadth.*/
int main()
{
float lenght,breadth,perimeter,area;
printf("Enter lenght and breadth of rectangle separated by space:");
scanf("%f %f", &lenght,&breadth);
perimeter=2*(lenght+breadth);
area= lenght*breadth;
printf("Perimeter of rectangle with lenght = %f breadth = %f is %.2f\n", lenght,breadth,perimeter);
printf("Area of rectangle is %.2f", area);

return 0;
}
