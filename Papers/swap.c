#include <stdio.h>
void swap(int, int);
void swap(int c, int d)
{
    c = c + d;
    d = c - d;
    c = c - d;
    printf("swapped value is a=%d and b=%d\n", c, d);
}
int main()
{
    int a, b;
    int swapping;
    printf("enter two numbers:\n");
    scanf("%d %d", &a, &b);
    printf("before swapping:a=%d,b=%d\n", a, b);
    swap(a, b);
    return 0;
}