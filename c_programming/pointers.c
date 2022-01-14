#include<stdio.h>

int main()
{
    int i, *p;
    printf("enter value of i : \n");
    scanf("%d",&i);
    p = &i;
    printf("%d\n",&i);
    printf("%d\n",*p);
    return 0;
}