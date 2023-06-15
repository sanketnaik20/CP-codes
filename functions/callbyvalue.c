#include <stdio.h>
void square(int);
void cube(int);

void main()
{
    int x;
    printf("enter a number");
    scanf("%d", &x);
    square(x);
    cube(x);
}

void square(int a)
{
    int b;
    b = a * a;
    printf("the square is %d\n", b);
}

void cube(int a)
{
    int b;
    b = a * a * a;
    printf("the cube is %d", b);
}