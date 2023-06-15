//leap year
#include<stdio.h>



void main()
{
    int year;
    printf("enter the year you want to check:\n");
    scanf("%d",&year);
    if(year%4==0)
    printf("the year %d is leap year",year);
    else
    printf("the year %d is not a leap year",year);
}