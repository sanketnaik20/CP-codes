#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i, j, n, target;
    printf("Enter Length of Array:\n");
    scanf("%d", &n);
    int *a = (int *)malloc(sizeof(int) * n);
    printf("enter elements of array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter target:\n");
    scanf("%d", &target);
    int flag = 0;
    for (i = 0; i < n; i++)
    {

        if (target == a[i])
        {
            printf("element found :\n");
            flag = 1;
        }
    }
    if (flag == 0)
    {
        printf("element not found");
    }
}
////
