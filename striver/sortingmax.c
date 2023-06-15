#include <stdio.h>
void main()
{
    int n, i, a[100], j, k;
    printf("Enter Length of the array(N):\n");
    scanf("%d", &n);
    printf("Enter Elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Sorted Array is :\n");
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                k = a[i];
                a[i] = a[j];
                a[j] = k;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("Largest Number is :%d\n", a[0]);
}