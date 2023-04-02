#include<stdio.h>
int main()
{
    int a,b,*p,*q,sum;
    printf("Enter two numbers:");
    scanf("%d %d", &a,&b);

    p=&a;
    q=&b;
    sum=*p + *q;
    printf("Sum is %d\n",sum);
    return 0;
}