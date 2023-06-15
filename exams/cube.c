#include <stdio.h>
void cube(int);
void cube(int a)
{
    int b;

    b = a * a * a;
    printf(" %d^3=%d\n", a, b);
}
void main()
{
    int i;

    for (i = 1; i <= 10; i++)
    {
        cube(i);
    }
}