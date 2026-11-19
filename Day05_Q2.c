#include<stdio.h>
/* Program to input time in seconds and output in hours, minutes and seconds.*/
int main()
{
    int time,hours,seconds,minutes;
    printf("Enter time in seconds: ");
    scanf("%d",&time);
    
    hours=time/3600;
    minutes=((time%3600)/60);
    seconds=(time % 60);
    printf("Time = %d:%d:%d",hours,minutes,seconds);
    return 0;
}