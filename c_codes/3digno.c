#include<stdio.h>
int main()
{
    int i,j,k;
    printf("enter any 3 digit number :- \n");
    scanf("%d",&i);
    j=i/10;
    k=j/10;
    printf("the first digit is %d",k);
    return(0);
}