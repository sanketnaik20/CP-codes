#include <stdio.h>
void main()
{
    int i,n,j;
    int a[5];
    printf("enter the elements of arrays");


    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter target");
    scanf("%d",&n);

    for (i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]+a[j]==n)
            printf("%d %d\n",i,j);
            
        }
       
    }
}