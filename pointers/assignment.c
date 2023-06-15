#include <stdio.h>
void main()
{

    int i, j = 25;
    int *pi;

    int *pj = &j;
    *pj = j + 5;
    i = *pj + 5;
    pi = pj;
    *pi = i + j;
    printf("*pj =%d\n", *pj);
    printf("*pi =%d\n", *pi);
    // printf("&i=%d\n", &i);
    // printf("&i=%d", &j);
    printf("*pi =%d\n", (*pi + 2));
}
