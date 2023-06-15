#include <stdio.h>
int fact(int x)
{
    int f;
    if (x == 0 || x == 1)
        return 1;
    else
        f = x * fact(x - 1);
    return f;
}
void main()
{
    int n, factorial;
    main();
    printf("enter a number");
    scanf("%d", &n);
    factorial = fact(n);
    printf("factorial is %d ", factorial);
}
