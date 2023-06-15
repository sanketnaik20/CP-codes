// questionno3//
#include <stdio.h>
float calavg(int[], int);
int main()
{
    int marks[100], i, n;
    float avg;
    printf("Enter No of Students:\n");
    scanf("%d", &n);
    printf("enter marks of each students:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
    }
    avg = calavg(marks, n);
    printf("The Average is %0.2f", avg);
}
float calavg(int marks[], int n)
{
    float sum = 0;
    float average;
    for (int i = 0; i < n; i++)
    {
        sum = sum + marks[i];
    }
    average = sum / n;
    return average;
}
