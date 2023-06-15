#include <stdio.h>

union student
{
    int roll_no;
    float marks;
    char name[20];
};

int main()
{
    union student s;
    size_t size = sizeof(s);

    printf("Size of union student: %zu bytes\n", size);

    return 0;
}
