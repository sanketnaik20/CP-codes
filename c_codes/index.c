#include<stdio.h>


int sumofnumbers()
{
    int a,b,c;
    printf("enter any two number: ");
    scanf("%d %d",&a,&b);
    c=a+b;
    return c;
    
}


int main()
{
   int c=sumofnumbers();
   printf("the sum of two given numbers is %d\n", c);
    return 0;
}
