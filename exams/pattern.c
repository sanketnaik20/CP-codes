#include <stdio.h>
void main()
{
    int i, j;
    char ch = 'A';
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (j <= i)
            {
                printf("%c ", ch++);
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}