#include <stdio.h>
int main()
{
    int i, n, num, positive = 0, negative = 0;
    printf("enter how manu numbers to check:");
    scanf("%d", &n);
    printf("enter numbers to check:");
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &num);
        if (num >= 0)
        {
            positive = positive + 1;
        }
        else
        {
            negative = negative + 1;
        }
    }
    printf("pos is :%d\n", positive);
    printf("neg is :%d", negative);
}
