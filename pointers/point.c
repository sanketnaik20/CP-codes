#include <stdio.h>
void main()
{
    int i, j, sum;
    int *p, *q;
    p = &i;
    q = &j;
    printf("enter numbers to add");
    scanf("%d %d", &i, &j);
    sum = (*p) + (*q);
    printf("the sum is %d",sum);
}