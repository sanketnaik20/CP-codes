#include <stdio.h>
void main()
{
    struct office
    {
        long employeeid;
        char name[100];
        char qual[100];
        int salary;
    } emp[100];
    int i, n;
    printf("enter the No of employees:\n");
    scanf("%d", &n);
    printf("Enter Employee Id ,Name\n,qualification\n,salaryOf each Person:\n\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d %s %s %d", &emp[i].employeeid, emp[i].name, emp[i].qual, &emp[i].salary);
    }
    printf("details of people's:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d %s %s %d", emp[i].employeeid, emp[i].name, emp[i].qual, emp[i].salary);
    }
}