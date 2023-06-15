#include <stdio.h>
int find_max(int a[], int n);
int main()
{
    int a[100], n, i, maximum;
    printf("Enter Length of Array (N):\n");
    scanf("%d", &n);
    printf("enter elements of array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    maximum = find_max(a, n);
    printf("The Maximum Number in that array is:%d\n ", maximum);
    return 0;
}

int find_max(int a[], int n)
{
    int max_value = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max_value)
        {
            max_value = a[i];
        }
    }
    return max_value;
}