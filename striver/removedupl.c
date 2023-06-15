#include <stdio.h>
void main()
{
    int a[50], i, j, k, n, c[100];
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
        printf("%d ", a[i]);
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

    printf("sorted array is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)

        {
            if (a[i] = a[j])
            {
                break;
            }
        }
        if (i == n)
        {
            printf("%d ", a[i]);
        }
    }

    // for (i = 0; i < n; i++)
    // {
    //     printf("%d ", a[i]);
    // }
}