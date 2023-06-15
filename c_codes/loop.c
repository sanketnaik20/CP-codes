#include <stdio.h>
void main()
{
    int a, i, sum = 0;
    for (i = 1; i <= 5; i++)
    {
        printf("enter a number");
        scanf("%d", &a);
        if (a < 0)
        {
            break;
        }
        else
        {
            sum = sum + a;
        }
    }
    printf("sum=%d", sum);
}
