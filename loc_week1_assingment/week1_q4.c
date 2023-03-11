#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,choice;//1-sum;2-difference;3-product;4-divison//
    printf("enter a");
    scanf("%d" , &a);
    printf("enter b");
    scanf("%d",& b);
    printf("1.sum\n2.difference\n3.product\n4.divison\n");
    scanf("%d" ,&choice);
    switch(choice)
    {
        case 1:printf("%d+%d=%d\n" ,a,b,(a+b));
        break;
        case 2:printf("%d-%d=%d\n" ,a,b,(a-b));
        break;
        case 3:printf("%d*%d=%d\n" ,a,b,(a*b));
        break;
        case 4:
        if(b==0){
            printf("can't be divided\n");
        }
        else{
            printf("%f/%f=%f\n",(float)a,(float)b,(float)a/b);
        }
        break;

        default:printf("wrong choice");
        break;
    }
    return 0;
}


    