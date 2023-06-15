#include <stdio.h>
int main()
{
    int marks[5];
    int i, sum = 0;
    float avg;
    printf("enter the marks of students");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (i = 0; i < 5; i++)
    {
        sum = sum + marks[i];
    }
    avg = sum / 5;
    printf("the sum is %d\n", sum);
    printf("the avr is %f\n", avg);
}