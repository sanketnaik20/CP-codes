#include <stdio.h>
void main()
{
    int a[100], i, n, j;
    int *max = a;
    printf("Enter length of Array (N):\n");
    scanf("%d", &n);
    printf("enter elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {

        if (a[i] > *max)
        {
            *max = a[i];
        }
    }
    printf("The Max value is: %d\n", *max);
}