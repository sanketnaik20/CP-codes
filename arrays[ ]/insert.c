#include <stdio.h>
void main()
{
    int i, size, a[100], pos, num;
    int n;
    printf("enter size of array:\n");
    scanf("%d", &n);
    printf("enter elements of array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter number and positon you want to insert:\n");
    scanf("%d %d", &num, &pos);
    for (i = size - 1; i >= pos - 1; i--)
    {
        a[i + 1] = a[i];
    }
    a[pos - 1] = num;
    n++;
    printf("after inseerter matrix is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d   ", a[i]);
    }
}