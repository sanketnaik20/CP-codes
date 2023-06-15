#include<stdio.h>
int main()
{
    int a,number,i;
    printf("enter number");
    scanf("%d",&number);
    for(i=1;i<=10;i++)
    {
        a=number*i;
        printf("%d\n",a);

    }
}