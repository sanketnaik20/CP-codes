#include <stdio.h>
void main()
{
    int i, a[100], n, pos, num;
    printf("Enter Size of Array:\n");
    scanf("%d", &n);
    printf("enter elements of array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter data:\n");
    printf("Enter Number:\n");
    scanf("%d", &num);
    printf("Enter position:\n");
    scanf("%d", &pos);
    for (i = n - 1; i >= pos - 1; i--) // i=n-1;i>=pos-1;i++......... a[i+1]=a[i].......a[pos-1]=num

    {
        a[i + 1] = a[i];
    }
    a[pos - 1] = num;
    n++;
    printf("Inserted MAtrix is :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}