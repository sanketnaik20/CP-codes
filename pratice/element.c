#include <stdio.h>
void main()
{
    int i, a[100], n, number;
    printf("enter N:\n");
    scanf("%d", &n);
    printf("enter elements of array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("the array is :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nEnter the Number You want to check:\n");
    scanf("%d", &number);
    int flag = 0;
    for (i = 0; i < n; i++)
    {
        if (number == a[i])
        {
            printf("element found\n");
            flag = 1;
        }
    }
    if (flag == 0)
    {
        printf("element not found:\n");
    }
}