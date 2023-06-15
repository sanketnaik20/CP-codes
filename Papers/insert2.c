#include <stdio.h>

int main()
{
    int i, a[50], size, num, pos;

    printf("Enter size of array:\n");
    scanf("%d", &size);

    printf("Enter elements of array:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the position to insert the number:\n");
    scanf("%d", &pos);

    if (pos < 1 || pos > size + 1)
    {
        printf("Invalid position to insert\n");
    }
    else
    {
        printf("Enter the number to insert:\n");
        scanf("%d", &num);

        for (i = size - 1; i >= pos - 1; i--)
        {
            a[i + 1] = a[i];
        }
        a[pos - 1] = num;
        size++;

        printf("Array after insertion:\n");
        for (i = 0; i < size; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
    }

    return 0;
}
