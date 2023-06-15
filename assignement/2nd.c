// // assignment question no 2

// #include <stdio.h>
// void cube(int);
// void cube(int a)
// {
//     int b;

//     b = a * a * a;
//     printf(" %d^3=%d\n", a, b);
// }
// void main()
// {
//     int i;

//     for (i = 1; i <= 10; i++)
//     {
//         cube(i);
//     }
    
// }


#include<stdio.h>
void xyz()
{
   int k=4;
   int m;
   m=++k;
   printf("\n%d",m);
}
void main()
{
   int k=5;
   k=++k;
   xyz();
   xyz();
    printf("\n%d ",k);

}
