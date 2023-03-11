#include<stdio.h>
int main()
{
    int n,r,sum=0;
    printf("Enter your number:\n");
    scanf("%d" ,&n);
    do{
        r=n%10;
        sum+=r;
        n=n/10;
    }
    while(n>0);
    printf("Sum of digits:%d" ,sum);
    return 0;
}