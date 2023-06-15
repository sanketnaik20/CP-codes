#include<stdio.h>
#define pi 3.14
void area(float);
void area(float r )
{
    float area;
    area=pi*r*r;
    printf("the area of circle is %.2f",area);

}
int main()
{
    float x;
    printf("enter the value of radius");
    scanf("%f",&x);
    area(x);
    return 0;
}