#include <stdio.h>

int arr(int a[]);
int arr(int a[])
{
    int i, sum = 0;
    for (i = 0; i < 10; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}
int main()
{
    int i, j, a[10];
    printf("enter elements of arra:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    int summation = arr(a);
    printf("The summation of array is %d\n", summation);
}
