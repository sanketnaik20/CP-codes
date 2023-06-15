// //callby value
// #include<stdio.h>
// void add(int a,int b)
// {
//     int c;
//     c=a+b;
//     printf("the sum is %d",c);
// }
// void main()
// {
//     int i,j;
//     printf("enter numbers to add");
//     scanf("%d %d",&i,&j);
//     add(i,j);
// }
//



//callbyreference
#include<stdio.h>
void add(int *a,int *b)
{
    int c;
    c=*a+*b;
    printf("the sum is %d",c);
}
void main()
{
    int i,j;
    printf("enter numbers to add");
    scanf("%d %d",&i,&j);
    add(&i,&j);
}
