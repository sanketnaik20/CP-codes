#include<stdio.h>
 void add(int a,int b)
 {
    int c;
    c=a+b;
    printf("the sum of two number is %d",c);

 }
 int main()
 {
    int x,y;
    printf("enter two numbers");
    scanf("%d %d",&x,&y);
    add(x,y);
    return 0;
 }