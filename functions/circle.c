#include <stdio.h>
#define pi 3.14
void area(int *);
void circum(int *);

void main()
{
    int r;
    printf("enter value of radius");
    scanf("%d", &r);
    area(&r);
    circum(&r);
}

void area(int *a)
{
    float area;
    area = pi * (*a) * (*a);
    printf("the area of circle is %0.2f\n", area);
}
void circum(int *a)
{
    float cir;
    cir = 2 * pi * (*a);
    printf("the circumference of the circle is %0.3f", cir);
}
