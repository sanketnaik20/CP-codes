#include <stdio.h>

// user-defined function to calculate and print cubes
void cube(int n)
{
    printf("%d^3 = %d\n", n, n * n * n);
}

int main()
{
    int i;
    // iterate through numbers 1 to 10 and call cube function
    for (i = 1; i <= 10; i++)
    {
        cube(i);
    }
    return 0;
}
