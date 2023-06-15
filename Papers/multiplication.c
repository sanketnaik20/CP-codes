#include <stdio.h>
void main()
{
    int i, j, rows1, cols1, rows2, cols2, k, c[100][100];
    int a[100][100], b[100][100];
    printf("Enter Rows and Cols of Matrix 1:\n");
    scanf("%d %d", &rows1, &cols1);
    printf("Enter Rows and Cols of Matrix 2:\n");
    scanf("%d %d", &rows2, &cols2);
    printf("enter element of first matrix:\n");
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("matrix is:\n");
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols1; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("enter element of second matrix:\n");
    for (i = 0; i < rows2; i++)
    {
        for (j = 0; j < cols2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("matrix is:\n");
    for (i = 0; i < rows2; i++)
    {
        for (j = 0; j < cols2; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    if (cols1 != rows2)
    {
        printf("Invalid Rows and cols:\n");
    }
    else
    {
        for (i = 0; i < rows1; i++)
        {
            for (j = 0; j < cols2; j++)
            {
                int sum = 0;
                for (k = 0; k < cols1; k++)
                {
                    sum = sum + a[i][k] * b[k][j];
                }

                c[i][j] = sum;
            }
        }
        printf("multiplied matrix is :\n");
        for (i = 0; i < rows1; i++)
        {
            for (j = 0; j < cols2; j++)
            {
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    }
}