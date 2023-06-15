#include <stdio.h>
struct student
{
    int rollno;
    char name[20];
    float marks;
};
int main()
{
    int i, n;
    struct student s[100];
    printf("enter N;\n");
    scanf("%d", &n);
    printf("enter rollno,name,marks:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d %s %f", &s[i].rollno, s[i].name, &s[i].marks);
    }
    printf("Marks of all students is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n%s\n %f\n", s[i].rollno, s[i].name, s[i].marks);
    }
}