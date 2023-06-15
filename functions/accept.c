// assigenment answer 4

#include <stdio.h>

void main()
{
    int a, n, count = 0, pos = 0, neg = 0, num, i;
    printf("enter the numbers to print");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("enter the number");
        scanf("%d", &num);

        if (num >= 0)
        {
            pos = pos + 1;
        }
        else
        {
            neg = neg + 1;
        }
    }
    printf("\npositive numbers is %d\n", pos);
    printf("negative numbers is %d\n", neg);
}
