#include <stdio.h>
#include <stdlib.h>
int checkmax(int[], int);
int main()
{
    int i, j, n;
    printf("Enter Length of array:\n");
    scanf("%d", &n);
    int *a = (int *)malloc(sizeof(int) * n);
    printf("enter elements");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int maximum = checkmax(a, n);
    printf("maximum number is %d", maximum);
    return 0;
}
int checkmax(int a[], int n)
{
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}