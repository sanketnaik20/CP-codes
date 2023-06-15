#include <stdio.h>

void main()
{
    int i, j, rows,colms;
    printf("enter no of rows");
    scanf("%d",&rows);
    printf("enter no of colms");
    scanf("%d",&colms);
    
    
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= colms; j++)
        {
            if (j>=5-i && j<=3+i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}