#include <stdio.h>
#include <stdlib.h>
int checkavg(int[], int);

int main()
{
    int i, n, sum;

    printf("enter length of array:\n");
    scanf("%d", &n);
    int *a = (int *)malloc(sizeof(int) * n);
    printf("enter element:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    sum = checkavg(a, n);
    printf("the sum is %d\n", sum);
    printf("the avg is %d", sum / n);
    return 0;
}
int checkavg(int a[], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}