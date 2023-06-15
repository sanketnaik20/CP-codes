#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[100][100], b[100][100], c[100][100];
    int i, j, sum, rows1, cols1, rows2, cols2;
    printf("enter rows and cols of first matrix:\n");
    scanf("%d %d", &rows1, &cols1);
    // printf("enter rows and cols of second matrix:\n");
    // scanf("%d %d", &rows2, &cols2);
    printf("enter element os first matrix:\n");
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("first matrix is:\n");
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols1; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("enter element of second matrix:\n");
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols1; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("second matrix is:\n");
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols1; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols1; j++)
        {

            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\nsum of matrices is:\n");
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols1; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}