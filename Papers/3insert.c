#include <stdio.h>
void main()
{
    int i, a[50], size, num, pos;
    printf("enter size of array:\n");
    scanf("%d", &size);
    if (size >= a[50])
    {
        printf("buffer overflow:\n");
    }

    else
    {
        printf("enter elements of ar:\n");
        for (i = 0; i < size; i++)
        {
            scanf("%d", &a[i]);
        }
        for (i = size - 1; i >= pos - 1; i--)
        {
            a[i + 1] = a[i];
        }
        a[pos - 1] = num;
        size++;
        printf("Matrix is :\n");
        for (i = 0; i < size; i++)
        {
            printf("%d", a[i]);
        }
    }
}