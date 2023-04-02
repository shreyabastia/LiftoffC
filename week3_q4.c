#include<stdio.h>
void findFactorial(int num,int *result){
    int i;
    *result=1;
    for(i=1;i<=num;i++){
        *result *=i;
    }
}
int main(){
    int num,result;
    printf("Enter number:");
    scanf("%d",&num);
    findFactorial(num,&result);
    printf("factorial of %d=%d\n",num,result);
    return 0;
}