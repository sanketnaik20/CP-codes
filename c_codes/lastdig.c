#include<stdio.h>
int main()
{
    int i,j;
    printf("enter a number");
    scanf("%d",&i);
    j=i%10;
    printf("the last digit of a number is %d",j);
    return (0);
}