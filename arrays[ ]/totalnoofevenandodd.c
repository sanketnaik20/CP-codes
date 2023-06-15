#include <stdio.h>
int main()
{
    int a[10];
    int even = 0, odd = 0, i;
    printf("enter 10 numbers");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
        {
            even = even + 1;
        }
        else
            odd = odd + 1;
    }
    printf("total no of even numbers is %d",even);
    printf("\n total no of odd numbers is %d",odd);
    
}