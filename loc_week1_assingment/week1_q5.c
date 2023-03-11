#include<stdio.h>
int main()
{
    float r;
    printf("Enter radius: \n");
    scanf("%f" ,&r);
    printf("diameter is %f\n" , 2*r);
    printf("circumference is %f\n" , 2*3.14*r);
    printf("area is %f\n" , 3.14*r*r);
    return 0;
}