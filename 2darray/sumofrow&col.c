#include <stdio.h>
void main()
{
    int i, j, a[3][3], sr, sc;
    printf("enter the elements of 3x3 matrix");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("orginal matrix is :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        sr = 0, sc = 0;
        for (j = 0; j < 3; j++)
        {
            sr = sr + a[i][j];
            sc = sc + a[j][i];
        }
        printf("sum of row is %d and sum of col is %d\n", sr, sc);
    }
}