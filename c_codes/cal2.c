#include<stdio.h>
// #include<conio.h>
#include<stdlib.h>
int main()
{
    int x,a,b,p,q,m1,m2,d1,d2;
    float ans;
    while(1)
   {
      printf("\n1. ADDITION");
      printf("\n2. SUBTRACTION");
      printf("\n3. MULTIPLICATION");
      printf("\n4. DIVISION");
      printf("\n5. EXIT");
      printf("\n\nEnter Your Choice");
      scanf("%d",&x);
      switch(x)
      {
      case 1:
        printf("Enter Any Two Values to Evaluate");
        scanf("%d %d",&a,&b);
        ans=a+b;
        printf("The Sum of 2 Given Numbers is %f",ans);
        break;
      case 2:
        printf("Enter Any Two Values to Evaluate");
        scanf("%d %d",&p,&q);
        ans=p-q;
        printf("The Value of a-b is %f",ans);
        break;
      case 3:
        printf("Enter Any Two Values to Evaluate");
        scanf("%d %d",&m1,&m2);
        ans=m1*m2;
        printf("The Product of Two Given Number is %f",ans);
        break;
      case 4:
        printf("Enter Any Two Values to Evaluate(d1/d2)");
        scanf("%d %d",&d1,&d2);
        ans=d1/d2;
        printf("The Answer of d1/d2 is %f",ans);
        break;
      case 5:
        exit(1);
      default:
        printf("invalid choice");

      }
   }
//    getch();
}
