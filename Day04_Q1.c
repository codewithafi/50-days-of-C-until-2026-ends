#include<stdio.h>
/*Program to swap two numbers using a third variable.*/
int main(){
  int a,b, temp;
printf("Enter two numbers separated by space:");
scanf("%d %d",&a,&b);
temp=a;
a=b;
b=temp;
printf("After swapping,/n First number= %d,/n Second number= %d",a,b);
return 0;
}
