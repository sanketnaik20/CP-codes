// #include <stdio.h>
// void main()
// {
//     int i=1, num, ans;
//     printf("enter the number you want table of");
//     scanf("%d", &num);
//     while (i <= 10)
//     {
//         ans=num*i;
//         printf("%d*%d=%d\n",num,i,ans);
//         i++;
//     }
// }
// with do while
#include <stdio.h>
void main()
{
    int i = 1, num, ans;
    printf("enter the number you want table of");
    scanf("%d", &num);
    do
    {
        ans = num * i;
        printf("%d*%d=%d\n", num, i, ans);
        i++;
    } while (i <= 10);
}