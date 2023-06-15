#include <stdio.h>
void multiply(int *, int *);
void division(int *, int *);

void main()
{
    int x, y;
    printf("enter value of x and y");
    scanf("%d %d", &x, &y);
    multiply(&x, &y);

    division(&x, &y);
}

void multiply(int *a, int *b)
{
    int resultmul;
    resultmul = (*a) * (*b);
    printf("the multiplication of x and y is %d\n", resultmul);
}
void division(int *a, int *b)
{
    int resultdiv;
    resultdiv = (*a) / (*b);
    printf("the division of x and y is %d", resultdiv);
}
