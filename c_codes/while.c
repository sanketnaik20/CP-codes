#include<stdio.h>
int main()
{
    int i=3,j=4;
    while(i<j)
    {
        printf("%d",i+j);
        j=j-i;
        i=j-i;
        
    }
    return 0;
}