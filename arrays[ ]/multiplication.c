#include <stdio.h>

int main()
{
    int a[100][100], b[100][100], c[100][100];
    int i, j, k, rows1, cols1, rows2, cols2, sum = 0;

    printf("Enter the number of rows and columns of matrix 1:\n");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter the number of rows and columns of matrix 2:\n");
    scanf("%d %d", &rows2, &cols2);

    printf("Enter the elements of matrix 1:\n");
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("First matrix is:\n");
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols1; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("Enter the elements of matrix 2:\n");
    for (i = 0; i < rows2; i++)
    {
        for (j = 0; j < cols2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Second matrix is:\n");
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
        printf("Invalid Matrix dimensions for multiplication.\n");
    }
    else
    {
        for (i = 0; i < rows1; i++)
        {
            for (j = 0; j < cols2; j++)
            {
                sum = 0;
                for (k = 0; k < cols1; k++)
                {
                    sum = sum + a[i][k] * b[k][j];
                }
                c[i][j] = sum;
            }
        }

        printf("Multiplied matrix is:\n");
        for (i = 0; i < rows1; i++)
        {
            for (j = 0; j < cols2; j++)
            {
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
