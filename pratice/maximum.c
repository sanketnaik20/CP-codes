// #include <stdio.h>
// void main()
// {
//     int n, i, a[100];
//     int max = a[0];
//     printf("Enter N:\n");
//     scanf("%d", &n);
//     printf("Enter Elementes:\n");
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (i = 0; i < n; i++)
//     {
//         if (a[i] > max)
//         {
//             max = a[i];
//         }
//     }
//     printf("the maximum number is %d", max);
// }
#include <stdio.h>
#include<stdlib.h>
int checkmax(int[], int);
int main()
{
    int n, i;
    int maximum;
    printf("Enter N:\n");
    scanf("%d", &n);
    
    int *a=(int *)malloc(sizeof(int)*n);

    printf("Enter Elementes:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    maximum = checkmax(a, n);
    printf("the maxiumum is %d", maximum);
    return 0;
}
int checkmax(int a[], int n)
{
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}