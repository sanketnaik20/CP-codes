#include <stdio.h>

void sum(int n)
{
    int s = 0;
    if (n == 1)
    {
        return;
    }
    else
    {
        s = n + sum(n - 1);
        return s;
    }
}

void main()
{
    int a, s;
    printf("enter numbers");
    scanf("%d", &a);
    a = sum(a);
    printf("%d", s);
}