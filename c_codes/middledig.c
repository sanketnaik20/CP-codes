#include<stdio.h>
int main()
{
    int i,j,k;
    printf("Enter any 3 digit number:\n");
    scanf("%d",&i);
    j=i/10;
    k=j%10;
    printf("The Middle Digit is %d",k);
    return(0);
    
    
}