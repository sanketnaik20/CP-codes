#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, k, rows1, rows2, cols1, cols2;
    printf("Enter Number of rows and cols of matrix 1:\n");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter Number of rows and cols of matrix 2:\n");
    scanf("%d %d", &rows2, &cols2);
    ///////
    int **a = (int **)malloc(rows1 * sizeof(int *));
    for (int i = 0; i < rows1; i++)
    {
        a[i] = (int *)malloc(cols1 * sizeof(int));
    }
    int **b = (int **)malloc(rows1 * sizeof(int *));
    for (int i = 0; i < rows1; i++)
    {
        b[i] = (int *)malloc(cols1 * sizeof(int));
    }
    
        ///////
        printf("Enter Elements of Matrix 1:\n");
        for (i = 0; i < rows1; i++)
        {
            for (j = 0; j < cols1; j++)
            {
                scanf("%d\t",&a[i][j]);
            }
        }
        printf("Matrix is :\n");
        for (i = 0; i < rows1; i++)
        {
            for (j = 0; j < cols1; j++)
            {
                scanf("%d", a[i][j]);
            }
            printf("\n");
        }
    }