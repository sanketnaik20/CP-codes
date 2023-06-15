#include <stdio.h>
#include <stdlib.h>
int checkmax(int[], int);
int main()
{
    int n, i, maximum;
    printf("enter N:\n");
    scanf("%d", &n);

    int *a = (int *)malloc(sizeof(int) * n);
    printf("Enter Elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    maximum = checkmax(a, n);
    printf("Maximum Number is %d", maximum);
    return 0;
}
int checkmax(int a[], int n)
{
    int max = a[0];
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    return max;
}
