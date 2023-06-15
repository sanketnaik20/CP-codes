// Write a C program using a structure to accept the details of n students with fields such as roll_no, name ,marks in subject1,subject2 and calculate the total marks of 2 subjects.
#include <stdio.h>
struct student
{
    int roll_no;
    char name[50];
    float subject1;
    float subject2;
} s[100];

void main()
{
    int i, n;
    float total;
    printf("enter number of student:\n");
    scanf("%d", &n);
    printf("enter rollno,name of the student, marks in subject 1,marks in subject 2:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d %s %f %f", &s[i].roll_no, s[i].name, &s[i].subject1, &s[i].subject2);
    }
    for (i = 0; i < n; i++)
    {
        total = s[i].subject1 + s[i].subject2;
        printf("the total marks of %s ( roll no %d ) is %0.2f\n", s[i].name, s[i].roll_no, total);
    }
}
