// assigenment answer 4

#include <stdio.h>

void main()
{
    int a, n, count = 0, positive = 0, negative = 0, num, i;
    printf("enter the numbers to print: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("enter numbers :");
        scanf("%d", &num);

        if (num >= 0)
        {
            positive = positive + 1;
        }
        else
        {
            negative = negative + 1;
        }
    }
    printf("\npositive numbers is %d\n", positive);
    printf("negative numbers is %d\n", negative);
}
