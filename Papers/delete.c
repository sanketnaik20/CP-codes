#include <stdio.h>
void main()
{
    int i, a[100], pos, size;
    printf("Enter Size of An array:\n");
    scanf("%d", &size);
    printf("enter elements of array:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("array is:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\nenter position you want element to be deleted:\n");
    scanf("%d", &pos);
    if (pos <= 0 || pos > size)
    {
        printf("Invalid Position:\n");
    }
    else
    {
        int item = a[pos-1];
        for (i = pos - 1; i < size - 1; i++)
        {
            a[i] = a[i + 1];
        }
        size--;
        printf("deleted array is:\n");
        for (i = 0; i < size; i++)
        {
            printf("%d\t", a[i]);
        }
        printf("deleted element is %d", item);
    }
}