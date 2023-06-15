#include <stdio.h>
void main()
{
    int students, i;
    float stu[100];
    printf("enter no of students");
    scanf("%d", &students);
    printf("enter marks of students:\n");
    for (i = 0; i < students; i++)
    {
        scanf("%f", &stu[i]);
    }
    printf("results of each students are");
    for (i = 0; i < students; i++)
    {
        printf("\n%0.2f", stu[i]);
    }
}
