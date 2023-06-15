#include <stdio.h>
void main()
{
    int i, j, a[3][3], b[3][3], c[3][3], k, sum;
    printf("enter elements of matrix 1:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("first matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("enter elements of 2nd matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d ", &b[i][j]);
        }
    }
    printf("2nd  matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    printf("mul is :\n");
    for (i = 0; i < 3; i++)
    {
        for (k = 0; j < 3; j++)
        {
            sum = 0;
            for (k = 0; k < 3; k++)
            {
                sum = sum + a[i][k] * b[i][k];
            }
            c[i][j] = sum;
            printf("%d", c[i][j]);
        }
    }
}