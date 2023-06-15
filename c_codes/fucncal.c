// #include <stdio.h>
// int main()
// {
//     int choice, a, sum;

//     while (1)
//     {
//         printf("1:Addition");
//         printf("2:Subtratcion");
//         printf("3:multiplication");
//         printf("4:division");
//         printf("5:exit");
//         printf("Enter Your Choice");
//         scanf("%d", &a);
//         switch (choice)
//         {
//         case 1:

//             addition(sum);
//             printf("the sum is %d ", sum);
//             break;

//         default:
//             invalid();
//             break;
//         }
//     }
// }
// addition(int a1, int a2)
// {
//     int sum1;
//     printf("enter two numbers");
//     scanf("%d %d", &a1, &a2);
//     sum1 = a1 + a2;
//     sum1 = sum;
//     return sum;
// }
// invalid()
// {
//     printf("invalid choice");
//     return 0;
// }

#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}

int main()
{
    int num1, num2, result;
    char op;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        result = add(num1, num2);
        break;

    case '-':
        result = subtract(num1, num2);
        break;

    case '*':
        result = multiply(num1, num2);
        break;

    case '/':
        result = divide(num1, num2);
        break;

    default:
        printf("Invalid operator");
        return 0;
    }

    printf("%d %c %d = %d", num1, op, num2, result);
    return 0;
}