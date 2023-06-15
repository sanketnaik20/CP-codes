
// assignment question no 2

#include <stdio.h>

void cube(int);
void cube(int a)
{
    int b;

    b = a * a * a;
    printf("The cube of %d is %d\n", a, b);
}
void main()
{
    int x, i;

    for (i = 1; i <= 10; i++)
    {
        cube(i);
    }
}
