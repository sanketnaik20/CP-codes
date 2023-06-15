#include <stdio.h>
int main()
{
    int choice;

    while (1)
    {
        printf("1:Addition");
        printf("2:Subtratcion");
        printf("3:multiplication");
        printf("4:division");
        printf("5:exit");
        printf("Enter Your Choice");
        scanf("%d", &a);
        switch (choice)
        {
        case 1:

            addition();
            break;

        default:
            default();
        }
    }
}
addition(int a1, int a2)
{
    int sum;
    printf("enter two numbers");
    scanf("%d %d", &a1, &a2);
    sum = a1 + a2;
    printf("the sum is %d", sum);
}
default()
{
    printf("invalid choice");
    return 0;
}