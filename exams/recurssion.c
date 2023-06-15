#include <stdio.h>
int fact(int);
int main()
{
    int n, factorial;
    printf("enter number:\n");
    scanf("%d", &n);
    factorial = fact(n);
    printf("the factorial is %d", factorial);
}
int fact(int x)
{
    int f;
    if (x == 1 || x == 0)
        return 1;
    else
    {
        f = x * fact(x - 1);
        return f;
    }
}