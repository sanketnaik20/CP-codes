// 2ndquestion

#include <stdio.h>
void main()
{
    int a[100], i, n, num;
    printf("Enter Length of the array:\n");
    scanf("%d", &n);
    printf("enter elments of array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the Value you want to find in this array:\n");
    scanf("%d", &num);
    int flag = 0;
    for (i = 0; i < n; i++)
    {
        if (num == a[i])
        {
            printf("element is Found");
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("element not found");
}