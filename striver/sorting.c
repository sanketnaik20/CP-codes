#include <stdio.h>
void main()
{
    int a[50], i, j, k, n;
    printf("enter N ");
    scanf("%d", &n);
    printf("enter elements of the arrays");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("the array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] < a[j]) // change the condition either < or > this to get ascending or descending
            {
                k = a[i];
                a[i] = a[j];
                a[j] = k;
            }
        }
    }

    printf("\nsorted array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("\n%d\t", a[i]);
    }
    printf("\nthe second largest number is:%d \n", a[1]);
    printf("second smallest number is %d", a[n - 2]);
}
