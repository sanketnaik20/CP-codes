#include <stdio.h>

int *arrop(int b[])
{
    int j;
    printf("\nenter elements of func array");
    for (j = 0; j < 5; j++)
    {
        scanf("%d", &b[j]);
    }
   
    return b;
}

void main()
{
    int a[5], i;
    printf("enter elements of array");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("intil array");
    for (i = 0; i < 5; i++)
    {
        printf(" %d ", a[i]);
    }

    int *ans = arrop(a);
    // printf("%d", ans[1]);

    printf("\nafter altered array is");
    for (i = 0; i < 5; i++)
    {
        printf(" %d ", a[i]);
    }
}