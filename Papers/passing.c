#include <stdio.h>
#include <stdlib.h>
void arr(int a[], int *n);
void arr(int a[], int *n)
{
    int i;
    printf("Passed Array:\n");
    for (i = 0; i < *n; i++)
    {
        printf("%d ", a[i]);
    }
}
void main()
{
    int n, i;
    printf("Enter size of Array:\n");
    scanf("%d", &n);
    int *a = (int *)malloc(sizeof(int) * n);
    printf("enter elements of aarray;\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    arr(a, &n);
}
