#include <stdio.h>

#include <stdlib.h>
int main()
{
    float a1, a2, sum, s1, s2, sub, g, m1, m2, mul, d1, d2, div;
    int ans;
    int x;

   while (1)
   {
     printf("Type 1 to Do Addition");
    printf("\nType 2 to Do subrtraction");
    printf("\nType 3 to Do multiplication");
    printf("\nType 4 to Do division");
    printf("\nType 5 to Do exit");
    printf("\nenter your choice:");
    scanf("%d", &x);
  
        switch (x)
        {
            
        case 1:
            printf(" \nenter two values you want to add :\n");
            scanf("%f %f", &a1, &a2);
            sum = a1 + a2;
            printf("answer:");
            scanf("%d",&ans);
            if(ans==sum)
            printf("crct\n");
            else
            printf("false\n");
           
            break;
        case 2:
            printf("enter two values you want to subtract \n");
            scanf("%f %f", &s1, &s2);
            sub = s1 - s2;
            printf("the subtraction of two numbers is :%.3f \n", sum);
            break;
        case 3:
            printf("enter two values you want to multiply \n");
            scanf("%f %f", &m1, &m2);
            mul = m1 * m2;
            printf("the multiplication of two numbers is :%1f \n", mul);
            break;
        case 4:

            printf("enter two values you want to divide \n");
            scanf("%f %f", &d1, &d2);
            div = d1 / d2;
            printf("the multiplication of two numbers is :%f \n", div);
            break;
        case 5:
        printf("thanks for using");
            exit(0);
        default:
            printf("invalid choice enter valid option\n");
        }
   }
   
    
}
