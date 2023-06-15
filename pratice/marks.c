#include <stdio.h>
int checkAvg(int[], int);
void main()
{
    int a[100], n, i;
    float average;
    printf("enter N:\n");
    scanf("%d", &n);
    printf("Enter Element:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    average = checkAvg(a, n);
    printf("the average is :%f\n", average);
}

int checkAvg(int a[], int n)
{
    int sum = 0;
     float average;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    average = sum / n;
    return average;
}