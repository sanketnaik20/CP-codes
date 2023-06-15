// queno4
#include <stdio.h>
int findmax(int a[], int n);
int main()
{
    int a[100], n, i, maximum;
    printf("Enter length of the array (n):\n");
    scanf("%d", &n);
    printf("Enter Elements Of Array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    maximum = findmax(a, n);

    printf("the maximum value is :%d\n", maximum);
    return 0;
}
int findmax(int a[], int n)
{
    int maxvalue = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > maxvalue)
        {
            maxvalue = a[i];
        }
    }
    return maxvalue;
}