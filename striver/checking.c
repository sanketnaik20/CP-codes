#include <stdio.h>
int check(int *, int);
int main()
{
    int n, i, a[100], j, k, ans;
    printf("Enter Length of the array(N):\n");
    scanf("%d", &n);
    printf("Enter Elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    ans = check(a, n);
    if (ans)
        printf("The Array is sorted ");
    else
        printf("the array is not sorted:\n");
    return 0;
}
int check(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                return 0;
            }
        }
    }
    return 1;
}